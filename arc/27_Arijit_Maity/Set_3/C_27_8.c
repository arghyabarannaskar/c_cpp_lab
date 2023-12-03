#include <stdio.h>
struct studentInfo
{
    char name[50];
    int roll;
    int marks;
    char dob[11];
};
void createFile(char *fname)
{
    FILE *fp;
    fp = fopen(fname, "wb");
    fclose(fp);
}
void readFile(char *fname)
{
    struct studentInfo student;
    FILE *fp;
    fp = fopen(fname, "rb");
    while (fread(&student, sizeof(struct studentInfo), 1, fp))
    {
        printf("Name: %s\t Roll: %d\t Marks: %d\t DOB: %s\n", student.name, student.roll, student.marks, student.dob);
    }
    fclose(fp);
}
void addRecord(char *fname)
{
    struct studentInfo student;
    FILE *fp;
    int n;
    fp = fopen(fname, "ab");
    printf("Number of new records : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Student name : ");
        scanf("%s", student.name);
        printf("Student Roll Number : ");
        scanf("%d", &student.roll);
        printf("Student marks : ");
        scanf("%d", &student.marks);
        printf("Date of Birth : ");
        scanf("%s", student.dob);
        fwrite(&student, sizeof(struct studentInfo), 1, fp);
    }
    fclose(fp);
    readFile(fname);
}

void deleteRecord(char *fname)
{
    struct studentInfo student;
    FILE *fp, *fp_temp;
    int rollnum, found = 0;
    printf("Enter Roll Number to delete : ");
    scanf("%d", &rollnum);
    fp = fopen(fname, "rb");
    fp_temp = fopen("tmpfile.bin", "wb");

    while (fread(&student, sizeof(struct studentInfo), 1, fp))
    {
        if (student.roll == rollnum)
        {
            found = 1;
        }
        else
        {
            fwrite(&student, sizeof(struct studentInfo), 1, fp_temp);
        }
    }
    if (found == 0)
    {
        printf("Searched Roll Number not found\n");
    }
    fclose(fp);
    fclose(fp_temp);
    remove(fname);
    rename("tmpfile.bin", fname);
    if (found == 1)
    {
        readFile(fname);
    }
}
void modifyMarks(char *fname)
{
    struct studentInfo student;
    FILE *fp, *fp_temp;

    fp = fopen(fname, "rb");
    fp_temp = fopen("tmpfile.bin", "wb");

    while (fread(&student, sizeof(struct studentInfo), 1, fp))
    {
        if (student.marks > 40 && student.marks < 50)
        {
            student.marks += 10;
            fwrite(&student, sizeof(struct studentInfo), 1, fp_temp);
        }
        else
        {
            fwrite(&student, sizeof(struct studentInfo), 1, fp_temp);
        }
    }

    fclose(fp);
    fclose(fp_temp);
    remove(fname);
    rename("tmpfile.bin", fname);
    printf("After Modification : \n");
    readFile(fname);
}
int main()
{

    createFile("student_information.bin");
    addRecord("student_information.bin");
    deleteRecord("student_information.bin");
    modifyMarks("student_information.bin");
    return 0;
}
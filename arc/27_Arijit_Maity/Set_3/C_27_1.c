struct student{
    char name[100];
    int rollNum;
    float marks[5];
    float total;
}
//_____________________________________________________
struct student *students=(struct student*)malloc(n*sizeof(struct student));
/* n= number of student*/
//sorting__________________________________________
int i,j;
for(i=0; i<n; i++){
    int maxm=students[i].total;
    int index=i;
    for(j=i;j<n; j++){
        if(maxm<students[j].total){
            maxm=students[j].total;
            index=j;
        }
    }
    if(index!=i){
        /* swap operation*/
        struct student temp;
        strcpy(temp.name,students[i].name);
        temp.total=students[i].total;
        strcpy(students[i].name, students[index].name);
        students[i].total = students[index].total;
        strcpy(students[index].name, temp.name);
        students[index].total = temp.total;
    }
}
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct date{
    char dd[3];
    char mm[3];
    char yyyy[5];
};
int main(){
    struct date date1,date2;
    printf("Date 1: ");
    scanf("%s %s %s",date1.dd,date1.mm,date1.yyyy);
    printf("Date 2: ");
    scanf("%s %s %s", date2.dd, date2.mm, date2.yyyy);
    if (strcmp(date1.dd, date2.dd)==0 && strcmp(date1.mm, date2.mm)==0 && strcmp(date1.yyyy, date2.yyyy)==0)
    {
        printf("Equal");
    }
    else
    {
        printf("Unequal");
    }
    return 0;
}
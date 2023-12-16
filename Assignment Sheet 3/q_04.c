#include<stdio.h>
#include<stdlib.h>

struct Date{
    int dd, mm, yyyy;
};

typedef struct Date Date;

int main(){
    Date d1, d2;
    printf("Enter the first date: ");
    scanf("%d%*c%d%*c%d", &d1.dd, &d1.mm, &d1.yyyy);
    printf("Enter the second date: ");
    scanf("%d%*c%d%*c%d", &d2.dd, &d2.mm, &d2.yyyy);

    if(d1.yyyy != d2.yyyy){
        printf("Unequal");
        exit(1);
    }else if(d1.mm != d1.mm){
        printf("Unequal");
        exit(2);
    }else if(d1.dd != d2.dd){
        printf("Unequal");
        exit(3);
    }

    printf("Equal");

    return 0;
}
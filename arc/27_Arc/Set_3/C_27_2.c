#include<stdio.h>
struct time{
    int hrs;
    int min;
    int sec;
};
struct time add(struct time time1, struct time time2){
    struct time addTime;
    addTime.sec=(time1.sec+time2.sec)%60;
    addTime.min = (time1.min + time2.min + (time1.sec + time2.sec) / 60) % 60 ;
    addTime.hrs = (time1.hrs + time2.hrs + (time1.min + time2.min + (time1.sec + time2.sec) / 60) / 60)%12;
    return addTime;
}
int main(){
    struct time  time1;
    printf("Enter 1st time\nhours:");
    scanf("%d",&time1.hrs);
    if(time1.hrs>12 || time1.hrs<0){
        printf("Invalid Input");
        return 0;
    }
    printf("mins:");
    scanf("%d",&time1.min);
    if (time1.min > 60 || time1.min<0)
    {
        printf("Invalid Input");
        return 0;
    }
    printf("secs:");
    scanf("%d",&time1.sec);
    if (time1.sec > 60 || time1.sec<0)
    {
        printf("Invalid Input");
        return 0;
    }

    struct time time2;
    printf("Enter 2nd time\nhours:");
    scanf("%d",&time2.hrs);
    if (time2.hrs > 12 || time2.hrs<0)
    {
        printf("Invalid Input");
        return 0;
    }
    printf("mins:");
    scanf("%d",&time2.min);
    if (time1.min > 60 || time2.min<0)
    {
        printf("Invalid Input");
        return 0;
    }
    printf("secs:");
    scanf("%d",&time2.sec || time2.sec<0);
    if (time1.sec > 60)
    {
        printf("Invalid Input");
        return 0;
    }
    struct time addTime=add(time1,time2);
    printf("New Time\n");
    printf("%d hours %d mins %d secs",addTime.hrs,addTime.min,addTime.sec);
    return 0;
}
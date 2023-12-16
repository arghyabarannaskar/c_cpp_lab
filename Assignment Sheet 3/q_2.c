#include<stdio.h>

struct time{
    int hour, minute, second;
};

typedef struct time TIME;

TIME addTime(TIME t1, TIME t2);

int main(){
    TIME t1, t2, result;
    printf("Enter the first time(h:m:s 24hours format)- ");
    scanf("%d%*c%d%*c%d", &t1.hour, &t1.minute, &t1.second);
    if(t1.second>=60 || t1.minute >=60 || t1.hour>=24){
        printf("Invalid time");
    }
    printf("Enter the second time(h:m:s)- ");
    scanf("%d%*c%d%*c%d", &t2.hour, &t2.minute, &t2.second);
    if(t2.second>=60 || t2.minute >=60 || t2.hour>=24){
        printf("Invalid time");
    }

    result = addTime(t1, t2);

    printf("Time after addition: %d:%d:%d", result.hour, result.minute, result.second);

    return 0;
}

TIME addTime(TIME t1, TIME t2){
    int carry = 0;
    TIME result;
    result.second = (t1.second + t2.second);
    carry = result.second / 60;
    result.second = result.second % 60;

    result.minute = carry + (t1.minute + t2.minute);
    carry = result.minute / 60;
    result.minute = result.minute % 60;

    result.hour = t1.hour + t2.hour + carry;
    result.hour = result.hour % 24;

    return result;
}
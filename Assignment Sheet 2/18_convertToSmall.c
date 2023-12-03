#include<stdio.h>
#include<string.h>

int main(){
    char st[80];
    printf("Enter a string: ");
    gets(st);

    char *ptr = st;
    while(*ptr){
        if(*ptr>=65 && *ptr<=90)
            *ptr += 32;
        ptr++;
    }

    printf("%s", st);

    return 0;
}
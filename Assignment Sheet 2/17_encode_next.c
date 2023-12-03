#include<stdio.h>
#include<string.h>

int main(){
    char st[80];
    printf("Enter a string: ");
    gets(st);

    char *ptr = st;
    while(*ptr){
        char next = *ptr + 1;
        if((next >=48 && next<= 57) || (next >=65 && next <= 90) || (next>=97 && next <= 122))
            *ptr = next;
        else
            *ptr = ' ';
        ptr++;
    }

    printf("%s", st);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[80];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str), j = 0;
    char *rev = (char *)malloc(len+1);
    for (int i = len - 1; i >= 0; i--){
        rev[len - 1 - i] = str[i];
    }
    rev[len] = '\0';
    printf("The reversed string is %s", rev);
    if(strcmp(str, rev) == 0)
        printf("\nThe string %s is palindrome.");
    else
        printf("\nThe string %s is not palindrome");

    return 0;
}
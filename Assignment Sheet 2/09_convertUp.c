#include<stdio.h>
#include<string.h>

int main(){
    char str[80];
    puts("Enter your text: ");
    gets(str);

    for(int i = 0; i<strlen(str); i++){
        if(str[i] >= 97 && str[i]<=122){
            str[i] -= 32;
        }
    }

    printf("\n%s", str);

    return 0;
}
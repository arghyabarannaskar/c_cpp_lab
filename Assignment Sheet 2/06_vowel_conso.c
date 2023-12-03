#include<stdio.h>
#include<string.h>

int main(){
    char str[80];
    printf("Enter a string: ");
    gets(str);
    
    int i = 0, flag, vowels = 0, consonants = 0;
    while(str[i]){
        flag = 1;
        switch (str[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowels++;
                flag = 0;
                break;
        }
        if(flag && ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)))
            consonants++;
            
        i++;
    }

    printf("There are %d vowels and %d consonants in the string.", vowels, consonants);

    return 0; 
}
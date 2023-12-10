#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

void fun_strlen();
void fun_strcpy();
void fun_strcat();
void fun_strrev();
void fun_strcmp();

int Strlen(char *s);
void Strcpy(char *target, const char *source);
void Strcat(char *target, const char *source);
char * Strrev(char *original);
int Strcmp(char *s1, char *s2);

int main(){
    char ch;
    int choice;
    do{
        printf("\n\n1. Strlen() 2. Strcpy() 3. Strcat() 4. Strrev() 5. Strcmp()\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            fun_strlen();
            break;
        case 2:
            fun_strcpy();
            break;
        case 3:
            fun_strcat();
            break;
        case 4:
            fun_strrev();
            break;
        case 5:
            fun_strcmp();
            break;
        
        default:
            break;
        }
        printf("\nEnter n to stop or anything else to try again: ");
        ch = getche();
    } while (tolower(ch) != 'n');

    return 0;
}

void fun_strlen(){
    char st[80];
    puts("\nEnter your string: ");
    gets(st);
    int len = Strlen(st);
    printf("\nThe length of the string is: %d", len);
}

void fun_strcpy(){
    char st[80];
    puts("\nEnter your string: ");
    gets(st);
    char str[80];
    Strcpy(str, st);
    printf("\nAfter copying st int str, str is %s", str);
}

void fun_strcat(){
    char target[] = "Sayonara";
    char source[] = " Arghya";
    printf("\nThe first string is %s and the second string is %s", target, source);
    Strcat(target, source);
    printf("\nAfter concatenating first string is %s", target);
}

void fun_strrev(){
    char str[80];
    puts("\nEnter your string: ");
    gets(str);
    printf("\nOriginal string = %s", str);
    char *s = Strrev(str);
    printf("\nAfter reversing = %s", s);
}

void fun_strcmp(){
    char st[80];
    char str[80];
    puts("\nEnter the first string: ");
    gets(st);
    puts("\nEnter the second string: ");
    gets(str);
    int cmp = Strcmp(st, str);
    if(cmp == 0)
        printf("\nThe strings are equal");
    else if(cmp < 0)
        printf("\nFirst string is lexographically smaller.");
    else
        printf("\nSecond string is lexographically smaller.");
}

int Strlen(char *s){
    int count = 0;
    while(*s){
        count++;
        s++;
    }
    return count;
}

void Strcpy(char *target, const char *source){
    while(*target++ = *source++)
        ;
}

void Strcat(char *target, const char *source){
    while(*target++)
        ;
    target--;
    while(*target++ = *source++)
        ;
}
char * Strrev(char *original){
    char *rev = (char *)malloc(Strlen(original)+1);
    int j = Strlen(original);
    rev[j] = '\0';
    j--;
    while(*original){
        rev[j] = *original;
        j--;
        original++;
    }
    return rev;
}

int Strcmp(char *s1, char *s2){
    int flag = 1;
    while(*s1 && *s2){
        if(*s1++ != *s2++){
            flag = 0;
            break;
        }
    }

    if(*s1 == '\0' && *s2 == '\0' && flag)
        return 0;
    s1--;
    s2--;
    if(*s1 > *s2)
        return 1;
    return -1;
}
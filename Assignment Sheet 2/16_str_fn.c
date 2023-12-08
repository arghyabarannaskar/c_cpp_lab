#include<stdio.h>
#include<conio.h>
#include<ctype.h>

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
    while(*s1 && *s2 && (*s1++ == *s2++))
        ;
    if(*s1 == '\0' && *s2 == '\0')
        return 0;
    s1--;
    s2--;
    if(*s1 > *s2)
        return 1;
    return -1;
}
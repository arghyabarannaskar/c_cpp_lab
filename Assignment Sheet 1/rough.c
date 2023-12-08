#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int xstrlen(char *s){
    int i = 0;
    while(s[i++])
        ;
    return i-1;
}

void xstrcpy(char *t, char *s){
    while(*t++ = *s++)
        ;
}

void xstrcat(char *t, char *s){
    while(*t++)
        ;
    t--;
    while(*t++ = *s++)
        ;
}

int main(int argc, char **argv){
    char source[] = "Sayonara", target[30] = "yo";
    printf("\n%s", strstr(source, target));
    printf("\n%d", sizeof(int *));

    return 0;
}
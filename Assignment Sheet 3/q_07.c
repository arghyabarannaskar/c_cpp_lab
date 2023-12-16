#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("text1.txt", "r");
    if(fp == NULL){
        printf("Error opening file!");
        exit(1);
    }

    FILE *ft = fopen("text2.txt", "w");
    if(ft == NULL ){
        printf("Error opening file!");
        exit(2);
    }

    char st[80];
    while(fgets(st, 79, fp)!= NULL){
        char *s = strupr(st);
        fputs(s, ft);
    }

    fclose(fp);
    fclose(ft);

    return 0;
}
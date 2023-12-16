#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("text1.txt", "r");
    if(fp == NULL){
        printf("Error opening file!");
        exit(1);
    }

    FILE *ft = fopen("text2.txt", "a");
    if(ft == NULL){
        printf("Error opening file!");
        exit(2);
    }

    char st[80];
    while(fgets(st, 79, fp) != NULL){
        fputs(st, ft);
    }

    fclose(fp);
    fclose(ft);

    return 0;
}
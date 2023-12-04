#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int row=0,col=0,i=0,j=0,sum=0;
    FILE *fp, *fwp;
    char **matrix;
    char str[100];
    fp=fopen("binarymatrix.txt","r");
    if(fp==NULL){
        return 1;
    }
    while(fgets(str,100,fp)){
        row++;
    }
    fclose(fp);
    fp = fopen("binarymatrix.txt", "r");
    col=strlen(str);
    matrix=(char**)malloc(row*sizeof(char*));
    for(i=0; i<row; i++){
        matrix[i]=(char*)malloc(col*sizeof(char));
    }
    i=0;
    while (fgets(str, 100, fp))
    {
         for(j=0; j<col; j++){
            matrix[i][j]=str[j];
         }
         i++;
    }
    printf("Binary Matrix in Dynamic Array : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Dimension of Matrix : %d x %d\n",row,col);
    fclose(fp);
    fwp=fopen("writesum.txt","w");
    for(i=0; i<row; i++){
        sum=0;
        for(j=0; j<col; j++){
            sum+= matrix[i][j]-48;
        }
        fprintf(fwp, "%d %d\n",i+1,sum);
    }
    
    fclose(fwp);
    return 0;
}
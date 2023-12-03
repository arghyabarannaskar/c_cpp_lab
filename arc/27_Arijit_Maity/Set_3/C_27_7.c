#include<stdio.h>
int main(){
	FILE *fp,*fwp;
	char ch;
	fp=fopen("readfile.txt","r");
	fwp=fopen("writefile.txt","w");
	while(1){
		ch=fgetc(fp);
		if(ch==EOF){
			break;
		}
		if(ch!=' ' && islower(ch)){
			ch=toupper(ch);
		}
		fputc(ch,fwp);
	}
	fclose(fwp);
	fclose(fp);
	printf("Done!");
	return 0;
}

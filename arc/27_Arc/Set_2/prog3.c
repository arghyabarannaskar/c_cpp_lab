/*
3. Write a function to take one string then print it in the reverse order.
   Write a recursive and non-recursive versions both.
*/

#include<stdio.h>
#include<string.h>

void reverse_nrec(char *str){
   for(int i=strlen(str);i>=0;i--){
      putchar(*(str+i));
   }
   putchar('\n');
}

void reverse_rec(char *str,int len){
   if(len==-1)  return;
   putchar(*(str+len));
   reverse_rec(str,len-1);
   
}


int main(){
   char str[100];
   scanf("%s",str);
   reverse_nrec(str);
   reverse_rec(str,strlen(str)-1);
}
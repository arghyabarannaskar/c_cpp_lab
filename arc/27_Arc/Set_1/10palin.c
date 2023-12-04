#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void solve();

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
     solve();
    }
    return 0;
}

void solve()
  {
     static int k=1;
     printf("\n\nTest case Number--%d\n\n",k++);
     char s[50];
    scanf("%s",s);
    int i=0,j=0;
    while(s[i]=='0'){
        i++;
    }
    while(s[j]!='\0'){
        j++;
    }
    
    j-=1;
    int p=j;
    while(s[j]=='0'){
        j--;
    }
    
    printf("Reverse: ");
    for(int k=j;k>=i;k--){
        putchar(s[k]);
    }
    printf("\n");
    int flag=1;
    if(j==p){
        for(int k=0;k<(j-i+1)/2;k++){
            if(s[j-k]!=s[i+k]){
                flag=0;
                break;
            }
        }
    }else{
        flag=0;
    }
    
    if(flag){
        printf("It is a palindrome");
    }else{
        printf("It is NOT a palindrome");
    }
}


#include<stdio.h>
#include<math.h>
int main()
{
   int t,i=1;
   scanf("%d",&t);
   while(t--)
      {
           printf("\n\nTest case Number--%d\n\n",i++);
           long int n;
           int flag=1;
         // printf("Enter n\n");
           scanf("%ld",&n);
         for(int i=1;i<n;i++)
         {
            if(2*i*i==n*(n+1))  {printf("%d\n",i); flag=0;}
         }
          
          if(flag) printf("The room no is not possible\n");
      }
      
   return 0;        

}
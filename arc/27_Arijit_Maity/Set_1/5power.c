#include<stdio.h>
#include<math.h>
int main()
{
   int t,i=1;
   scanf("%d",&t);
   while(t--)
      {
           printf("\n\nTest case Number--%d\n\n",i++);
           float base;
           int power;
          // printf("Enter The base & power\n");
           scanf("%f %d",&base,&power);
           printf("The output is::");
           if(base==0 && power<=0) printf("undefined\n");
           else if(base==0 && power>0) printf("0\n");
           else if(base==-1 && power<0) printf("-1\n");
           else
             {
               float result=1;
               for(int i=0;i<power;i++)
                 {
                 result=result*base;
                  }
                printf("%f",result);  
           }
           
      }
      
   return 0;        

}
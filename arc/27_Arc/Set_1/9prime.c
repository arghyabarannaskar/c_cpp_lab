#include<stdio.h>
#include<math.h>
int prime(int);
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

int prime(int n)
{
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0) return 1;
        
    }
    return 0;
}
void solve()
  {
        
        static int i=1;
         printf("\n\nTest case Number--%d\n\n",i++);
        // printf("Enter the limit");
         int n;
         scanf("%d",&n);
          if(n<=2)
            {
              printf("No prime numbers present\n");
            }
                
          else
            {
              printf("The prime numbers between 1 & %d are:---",n);
              printf("2 ");
              for(int i=3;i<n;i+=2)
                {
                 if(!prime(i)) printf(",%d ",i);
                }
           }
}
 

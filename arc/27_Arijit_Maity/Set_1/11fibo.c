#include<stdio.h>
#include<math.h>
void solve();
double fibo[72];
int main()
{
    fibo[0]=0;
    fibo[2]=1;
    fibo[1]=1;
    for(int a=3;a<=71;a++)
    {
        fibo[a]=fibo[a-1]+fibo[a-2];
    }
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
     int n;
//printf("Enter the n value\n");
scanf("%d",&n);
double answer=fibo[n];
printf("The %d th number in fibonacci series is %f\n",n,answer);
 double result2=(1/sqrt(5))*pow((1+sqrt(5))/2,n)-(1/sqrt(5))*pow((1-sqrt(5))/2,n);
printf("in the given formula the %d th number in fibonacci series is %f\n",n,result2);
printf("difference is %e\n",result2-answer);
      
}

     


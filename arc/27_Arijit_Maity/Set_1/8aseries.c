#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void solve();
double fact[100];
int main()
{
     fact[1]=1;
for(int i=2;i<=100;i++)
{
fact[i]=i*fact[i-1];
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
     static int test=1;
     printf(" \n\n Test case No %d:---\n\n",test++);

      double n;
     scanf("%lf",&n);
     double num=n;
     int term=50,i=1;
     double sign=+1;
     double sum=0;
     while(term--)
     {
       sum+=(num/fact[i])*sign;
      //printf("%lf\n",sum);
       //printf("%lf\n",num);
       num*=n;num*=n;
       //printf("%lf\n",num);
       i+=2;
       sign*=-1;
     }
     printf("%lf",sum);
}

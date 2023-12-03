#include<stdio.h>
int gcd(int,int);
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
        int n,a[100];
    //printf("how many numbers you want to give\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   long int ans=a[0];
    for(int i=1;i<n;i++)
    {
        ans=ans*(a[i]/gcd(ans,a[i]));
    }
    if(ans==0) printf("can not be calculated\n");
     else printf("Lcm is :---%ld\n",ans);
        
}
 
int gcd(int a,int b)
{
    if(a==0) return b;
    else if(b==0) return a;
    else gcd(b,a%b);
}


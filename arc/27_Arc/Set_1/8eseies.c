#include<stdio.h>
#include<math.h>
int prime(int);
void solve();
int arr[1001];
int main()
{
     int t,j=2;
     arr[0]=2;
     arr[1]=3;
     for(int i=5;i<=8000;i++)
     {
          if(!prime(i)) arr[j++]=i;
     }

    scanf("%d",&t);
    while(t--)
    {
     solve();
    }
    return 0;
}

int prime(int n)
{
    if(n==2) return 1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 1;
        
    }
    return 0;
}
void solve()
  {
        
        static int k=1;
         printf("\n\nTest case Number--%d\n\n",k++);
        // printf("Enter the terms limit");
         int n,i=0;
         scanf("%d",&n);
         long long int ans=0;
         while(n--)
         {
          ans+=arr[i++]*arr[i];
          //printf("%d %d\n",arr[i-1],arr[i]);
         }
         printf("%lld",ans);
}
 

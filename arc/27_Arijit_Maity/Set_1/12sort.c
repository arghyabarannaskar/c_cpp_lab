#include<stdio.h>
#include<math.h>
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
        
        int n1,n2;
        scanf("%d",&n1);
        int arr1[n1];
        for(int i=0;i<n1;i++) 
          {
            scanf("%d",&arr1[i]);
          }
        scanf("%d",&n2);
        int arr2[n2];
     for(int i=0;i<n2;i++)
        { 
          scanf("%d",&arr2[i]);
        }
    int ans[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) 
          {
               ans[k++]=arr1[i++];
          }
        else 
         {
          ans[k++]=arr2[j++];
         }
     }

    while(i<n1) ans[k++]=arr1[i++];
    while(j<n2) ans[k++]=arr2[j++];
    printf("\nThe Resultent sorted list is---::");
    for(i=0;i<n1+n2;i++)
      {
        printf("%d ",ans[i]);
      }
}
 

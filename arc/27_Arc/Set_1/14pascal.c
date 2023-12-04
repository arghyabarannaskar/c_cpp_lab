#include<stdio.h>
int nCr(int , int);
int fact(int);
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
      int n;
     //printf("Enter the depth of Pascal's Triangle: ");
     scanf("%d", &n);

     for(int i = 0 ; i <n ; i++)
      {
          for(int j = 0 ; j < n - i ; j++) 
               printf(" ");
          for(int j = 0 ; j <= i ; j++) 
          {
               int prnt = nCr(i, j);
               printf("%d ", prnt);
          }
          printf("\n");
     }
}

     
int nCr(int i, int j)
  {
     return fact(i) / (fact(i - j) * fact(j));
  }

int fact(int n) 
   {
     if(n < 2)
          return 1;
     return n * fact(n - 1);
   }


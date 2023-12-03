#include<stdio.h>
int main()
{
  int t,i=1;
  scanf("%d",&t);
  while(t--)
   {
      printf("Test case numnber  %d\n\n",i++);
      int r,total=0,n=100,temp,i=0;
      int den[4]={100,50,20,10};
      scanf("%d",&r);
      if(r%10!=0) 
         {
          printf("\nNo Such Denomination possible\n\n");
          continue;
         }
      while(i<4)
        {
         temp=r/den[i];
         total+=temp;
         printf("%d denomination needed:--- %d\n",den[i],temp);  
         r=r%den[i];
         i++;
        }
   
  printf("Total denomination needed  %d\n\n",total);
    
}
return 0;
}
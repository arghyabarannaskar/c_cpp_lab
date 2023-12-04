#include<stdio.h>
int main()
{
   int t,i=1;
   scanf("%d",&t);
   while(t--)
   {
     printf("\n\nTest case Number--%d\n\n",i++);
    //printf("1.Centigrade  to  Fahrenheit\n2. Fahrenheit To Centigrade\n press 1 or 2\n");
    int response;
    float c,f;
    scanf("%d",&response);
    if(response==1)
            {  //printf("Enter the temarature in centigrade\n");
               scanf("%f",&c); 
               printf("%.4f centigrade == %.4f Fahrenheit",c,c*1.8+32);
             }
    else if(response==2)
         {  
           //printf("Enter the temarature in farenheit\n");
           scanf("%f",&f); 
           printf("%.4f farenheit == %.4f Centigrade",f,(f-32)*5/9);
         }
        // else 
        // {
        //  printf("wrong input\n"); 
        //}
     }   
   return 0;        

}
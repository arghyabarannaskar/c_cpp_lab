#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b,temp) (temp=a,a=b,b=temp)


int *partition(int *arr,int n){
    int i=-1,j=0,temp;
    int ind = rand()%n;
    printf("%d\n",ind);
    SWAP(*(arr+n-1),*(arr+ind),temp);
    
    while(j<n-1){
        if(*(arr+j)<=*(arr+n-1)) {
            i++;
            SWAP(*(arr+i),*(arr+j),temp);
        }
        j++;
       
    }
    i++;
    SWAP(*(arr+i),*(arr+j),temp); 
    return (int*)arr;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int *ans=partition(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",*(ans+i));
    }
    return 0;
}
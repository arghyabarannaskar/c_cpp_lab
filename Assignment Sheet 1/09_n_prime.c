#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d\n", i);
    }

        return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double size = 1;
    double X;
    while(size<(double)INT_MAX){
        X = sqrt((size*(size+1))/2);
        if(X-floor(X) == 0)
            printf("X = %d, n = %d\n", (int)X, (int)size);
        size++;
    }

    return 0;
}
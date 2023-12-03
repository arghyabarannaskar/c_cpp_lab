#include<stdio.h>
#include<math.h>

int main(){
    double X;
    double size;
    printf("Enter the number of rooms: ");
    scanf("%lf", &size);
    X = sqrt((size * (size + 1)) / 2);
    if (X - floor(X) == 0)
        printf("X = %d, for total %d number of rooms\n", (int)X, (int)size);
    else
        printf("X is impossible for %d number of rooms", (int)size);

    return 0;
}
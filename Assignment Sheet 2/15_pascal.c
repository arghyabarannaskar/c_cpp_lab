#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int lines;
    printf("Till how many lines: ");
    scanf("%d", &lines);

    int *dp = (int *)malloc(lines * sizeof(int));
    memset(dp, 0, lines * sizeof(int));
    int *cur = (int *)malloc(lines * sizeof(int));
    for (int line = 1; line <= lines; line++){
        for (int j = 0; j < line; j++){
            if(line == j+1 || j == 0){
                cur[j] = 1;
            }
            else {
                cur[j] = dp[j - 1] + dp[j];
            }
        }
        for (int space = 1; space <= lines - line; space++){
            printf(" ");
        }
        for (int i = 0; i < line; i++)
        {
            dp[i] = cur[i];
            printf("%d ", dp[i]);
        }
        printf("\n");
    }

        return 0;
}
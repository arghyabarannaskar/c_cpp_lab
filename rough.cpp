#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    int val, count, idx;
    struct Node *next;
};


struct Node * arr[10] = {NULL};
int dupliCount = 0;

struct Node *newNode(int num, int i){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->val = num;
    temp->idx = i;
    temp->count = 1;
    temp->next = NULL;
    return temp;
}

// void init(){
//     dupliCount = 0;
//     for (int i = 0; i < 10; i++){
//         arr[i] = NULL;
//     }
// }

int hashfunction(int num){
    return num % 10;
}

void insert(int num, int i, int *isDupli){ //, int i, int *isDupli
    int index = hashfunction(num);
    if(arr[index] == NULL){
        arr[index] = newNode(num, i);
        return;
    }else{
        struct Node *curr = arr[index];
        struct Node *prev = NULL;
        while(curr){
            if(curr->val == num){ //found more than once
                if(curr->count == 1){ //first time match means there are 2 of this so, double increment only for the first.
                    dupliCount++;
                }
                    dupliCount++;
                *(isDupli + curr->idx) = 1;
                *(isDupli + i) = 1;
            
                curr->count++;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
                      //we have reached the end without a match
            prev->next = newNode(num, i);
        
    }
}

int main(){
    // init();
    int n;
    int *numbers;
    printf("How many numbers do you want to enter? -> ");
    scanf("%d", &n);
    numbers = (int *)malloc(n * sizeof(int));
    int *isDupli = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        isDupli[i] = 0;
    }
        // memset(isDupli, 0, n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("\nEnter the %dth value: ", i);
        scanf("%d", &numbers[i]);
        insert(numbers[i], i, isDupli);  //, i, isDupli
    }

    for (int i = 0; i<10; i++){
        if(arr[i]){
            printf("%d", i);
        }
        Node *curr = arr[i];
        while(curr != NULL){
                printf("-->(%d : %d)", curr->val, curr->count);
            curr = curr->next;
        }
        if(arr[i])
            printf("\n");
    }

    printf("\nNo of duplicate elements: %d", dupliCount);
    int *dupNums = (int *)malloc((n - dupliCount) * sizeof(int));
    int j = 0;
    printf("\n");
    for (int i = 0; i < n; i++){ //Printing isDupli Array
        printf("%d ", isDupli[i]);
    }

    for (int i = 0; i < n; i++){ //Copying to dupNums array
        if(!isDupli[i]){
            dupNums[j++] = numbers[i];
        }
    }

    printf("\n");
    for (int i = (n - dupliCount - 1); i >= 0; i--){
        printf("%d ", dupNums[i]);
    }

        return 0;
}
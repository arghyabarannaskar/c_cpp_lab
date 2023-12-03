#include<stdio.h>

int main(){
    int notes[] = { 10, 20, 50, 100 };
    int no_of_notes = sizeof(notes) / sizeof(notes[0]);
    int amount;
    printf("Enter Amount: ");
    scanf("%d", &amount);
    int required_notes = 0, current_count;
    for (int i = no_of_notes - 1; i >= 0; i--){
        if(notes[i]<=amount){
            current_count = amount / notes[i];
            amount = amount % notes[i];
            printf("\ndenomination %d is required: %d", notes[i], current_count);
            required_notes += current_count;
        }
    }

    printf("\nMinimum notes required: %d", required_notes);
    printf("\nUnpayable amount: %d", amount);

    return 0;
}
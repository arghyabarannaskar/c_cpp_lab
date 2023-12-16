#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Account{
    int accno, balance;
    char name[50];
};

typedef struct Account Account;

void printDetails(Account *bank, int totalAcc);

int main(){
    Account bank[10];
    FILE *fp = fopen("bank.txt", "r");

    if(fp == NULL){
        printf("Error opening file!");
        exit(1);
    }

    char st[80];
    int i = -1;
    while(fgets(st, 79, fp) != NULL){
        i++;
        int j = 1;
        char *token = strtok(st, " |\n");
        
        while(token != NULL){
            if(j == 1){
                bank[i].accno = atoi(token);
            }else if(j == 2){
                strcpy(bank[i].name, token);
            }else if(j == 3){
                strcat(bank[i].name, " ");
                strcat(bank[i].name, token);
            }
            else if(j == 4){
                bank[i].balance = atoi(token);
            }
            token = strtok(NULL, " |\n");
            j++;
        }
    }

    int totalAcc = i+1;

    for (int k = 0; k < totalAcc; k++){
        if(bank[k].balance<1000){
            printf("%d %s %d\n", bank[k].accno, bank[k].name, bank[k].balance);
        }
    }

    fclose(fp);

    char ch = 'y';
    while(ch == 'y'){
        int choice, acc, amount, target;
        printf("\n 1: Deposit | 0: Withdrawal  ----> ");
        scanf("%d", &choice);
            printf("\nEnter account no: ");
            scanf("%d", &acc);
            printf("Enter amount: ");
            scanf("%d", &amount);

            for (int i = 0; i < totalAcc; i++){
                if(bank[i].accno == acc){
                    target = i;
                    break;
                }
            }
                if (choice == 1)
                {
                    bank[target].balance += amount;
                }
                else if (choice == 0)
                {
                    bank[target].balance -= amount;
                }
        printDetails(bank, totalAcc);
        printf("\n\nEnter 'y' to go again or anything else to exit: ");
        fflush(stdin);
        scanf("%c", &ch);
    }

    return 0;
}


void printDetails(Account *bank, int totalAcc){
    printf("\n");
    for (int k = 0; k < totalAcc; k++){
            printf("%d %s %d\n", bank[k].accno, bank[k].name, bank[k].balance);
        
    }
}
#include <stdio.h>
#include <stdlib.h>
struct account
{
    int accNum;
    char name[100];
    float balance;
};
void printAccName(struct account *customers, int n)
{
    int i;
    printf("\nCustomers with balance below Rs.1000\n");
    for (i = 0; i < n; i++)
    {
        if (customers[i].balance < 1000)
        {
            printf("Account Number: %d\tCustomer Name: %s", customers[i].accNum, customers[i].name);
        }
    }
}
void handleWithdrawDeposit(struct account *customers, int n, int wd, int accountNumber, float amount)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (customers[i].accNum == accountNumber && wd == 0)
        {
            if (customers[i].balance < amount)
            {
                printf("The balance is insufficient for the specified withdrawal");
            }
            else
            {
                customers[i].balance -= amount;
                printf("New balance: %f of Account Number: %d", customers[i].balance, customers[i].accNum);
            }
            break;
        }
        if (customers[i].accNum == accountNumber && wd == 1)
        {
            customers[i].balance += amount;
            printf("New balance: %.2f", customers[i].balance, customers[i].accNum);
            break;
        }
    }
}

int main()
{
    struct account *customers;
    int n, i;
    printf("Enter number of customers: ");
    scanf("%d", &n);
    customers = (struct account *)malloc(n * sizeof(struct account));
    for (i = 0; i < n; i++)
    {
        printf("Customer %d\n", i + 1);
        printf("Account number:");
        scanf("%d", &customers[i].accNum);
        printf("Customer name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    printAccName(customers, n);

    int wd, accountnumber;
    float amount;
    printf("\n\nFor withdraw enter 0 and For deposit enter 1: ");
    scanf("%d", &wd);
    printf("Account number:");
    scanf("%d", &accountnumber);
    printf("Amount: ");
    scanf("%f", &amount);
    handleWithdrawDeposit(customers, n, wd, accountnumber, amount);
    return 0;
}
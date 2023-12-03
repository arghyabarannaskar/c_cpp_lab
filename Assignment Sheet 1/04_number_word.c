#include<stdio.h>
#include<string.h>

void print100(int);
void International(int);
void Indian(int);

char initial[20][10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eightteen", "Nineteen"};

char ties[10][8] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

int main(){
   

    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    int choice;
    printf("1. International System,           2. Indian System");
    printf("\nEnter your choice: ");
    scanf("%d", &choice); 

    if(choice == 1)
        International(number);
    else if(choice == 2)
        Indian(number);
    else
        printf("\nInvalid choice!");

    return 0;
}

void Indian(int number){
    int current, crore = 10000000, lakh = 100000;
    if(number>=crore){
        current = number / crore;
        print100(current);
        printf("Crore ");
        number = number % crore;
    }
    if(number>=lakh){
        current = number / lakh;
        print100(current);
        printf("Lakh ");
        number = number % lakh;
    }
    if(number>=1000){
        current = number / 1000;
        print100(current);
        printf("Thousand ");
        number = number % 1000;
    }
    print100(number);
}

void International(int number){
    int current, billion = 1000000000, million = 1000000;
    if(number>=billion){
        current = number / billion;
        print100(current);
        printf("Billion ");
        number = number % billion;
    }
    if(number>=million){
        current = number / million;
        print100(current);
        printf("Million ");
        number = number % million;
    }
    if(number>=1000){
        current = number / 1000;
        print100(current);
        printf("Thousand ");
        number = number % 1000;
    }
    print100(number);
}

void print100(int number){
    if(number>100){
        printf("%s Hundred ", initial[number / 100]);
        number = number % 100;
    }
    if(number> 20){
        printf("%s ", ties[number / 10]);
        number = number % 10;
    }

    if(number<20)
        printf("%s ", initial[number]);
}
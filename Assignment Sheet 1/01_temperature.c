#include<stdio.h>
#include<conio.h>
#include<ctype.h>

double c_to_F(double);
double f_to_C(double);

int main(){
    double temp;
    char c = 'y';
    int choice;
    while(c == 'y'){
        printf("Press 1: for Celcius to Farenheit coverter.");
        printf("\nPress 2: for Farenheit to Celcius coverter.");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter temperature in Celcius: ");
            scanf("%lf", &temp);
            printf("%lf degree Celcius = %lf degree Farenheit.", temp, c_to_F(temp));
            break;
        
        case 2:
            printf("Enter temperature in Farenheit: ");
            scanf("%lf", &temp);
            printf("%lf degree Farenheit = %lf degree Celcius.", temp, f_to_C(temp));
            break;
        
        default:
            printf("Wrong input. \n");
            break;
        }

        printf("\nPress y to convert again: ");
        c = getche();
        c = tolower(c);
    }

    return 0;
}

double c_to_F(double cel){
    return  (((double)9 / 5) * cel) + 32;
}

double f_to_C(double f){
    return (f - 32) * ((double)5 / 9);
}
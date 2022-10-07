#include<stdio.h>

int main(){
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f",&income);

    if(income >= 250000 && income<= 500000){
        tax = tax + (income-250000)*0.05;
    }
    if(income >= 500000 && income<= 1000000){
        tax = tax + (income-500000)*0.2;
    }
    if(income >= 1000000){
        tax = tax + (income-1000000)*0.3;
    }

    printf("Your net income tax to ve paid by 26th of this month is %f \n", tax);

    return 0;
}
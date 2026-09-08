/*Program to calculate the balance of a loan after three monthly payments*/
#include <stdio.h>
int main()
{ 
    float loan, interest_rate, monthly_interest_rate, payment, balance;
    printf("This program calculates the balance of a loan after three monthly payments\n");
    printf("Enter the amount taken as loan (a whole number): ");
    scanf("%f", &loan);
    printf("Loan Taken: %.2f\n", loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Interest Rate: %.2f percent\n", interest_rate);
    monthly_interest_rate = interest_rate/100/12;
    printf("Monthly Interest Rate: %.4f\n", monthly_interest_rate);
    printf("Enter the monthly payment amount: ");
    scanf("%f", &payment);
    printf("Monthly Payment Amount: %.2f\n", payment);
    //first month
    balance = loan + (loan*monthly_interest_rate) - payment;
    printf("Balance remaining after first payment: %.2f\n", balance);
    //second month
    balance = balance + (balance*monthly_interest_rate) - payment;
    printf("Balance remaining after second payment: %.2f\n", balance);
    //third month
    balance = balance + (balance*monthly_interest_rate) - payment;
    printf("Balance remaining after third payment: %.2f\n", balance);
    return 0;
}
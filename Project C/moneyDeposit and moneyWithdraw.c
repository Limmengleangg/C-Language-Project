#include"Functions.h"

float moneyDeposit(float balance) //Varin
{
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit

float moneyWithdraw(float balance) //Vatanak
{
    float withdraw;
    bool back = true;




}//money withdraw

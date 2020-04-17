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

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &withdraw);


        if (withdraw < balance) {
            back = false;
            balance -= withdraw;
            printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
            printf("****Your New Balance is:   $%.2f\n\n", balance);

        }
        else  {
            printf("+++You don't have enough money+++\n");
            printf("Please contact to your Bank Customer Services\n");
            printf("****Your Balance is:   $%.2f\n\n", balance);

        }
    }
    return balance;

}//money withdraw

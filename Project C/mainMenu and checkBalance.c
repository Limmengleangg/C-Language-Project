#include"Functions.h"

void mainMenu() //Sreyleap
{
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 > View transaction history\n");
    printf("< 5 >  Exit\n\n");

}//Main Menu

void checkBalance(float balance) //Sreyroth
{
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);

}//Check Balance

#include"Functions.h"

int login(int pass)
{
    int pass, i = 3;
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please enter your PIN number below****\n\n");
    scanf("%d",&pass); //2020

    while (i != 0)
	{
        printf("\nPlease enter the PIN number again: ");
        scanf("%d",&pass);

        if (pass == 2020)
        {
            printf("Correct password");
            i = 0;
        }
        else
        {
            printf("Wrong password, try another");
        }
	printf("\n");
   }

   return 0;
}// user login

void transaction(float balance)
{

}// view transaction

void viewDeposit(float balance)
{

}// view deposit transaction history

void viewWithdraw(float balance)
{

}// view withdraw transaction history

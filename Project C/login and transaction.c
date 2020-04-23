#include"Functions.h"

int login(int pass)
{
    int  i = 3;
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
    int options;
    printf("You Choose to See your transaction history\n");
    printf("Please Choose types of transaction below:\n");
    printf("< 1 > Deposit\n");
    printf("< 2 > Withdraw\n");

    switch(options)
    {
        case 1:
            system("CLS");
            viewDeposit(balance);
            break;
        case 2:
            system("CLS");
            viewWithdraw(balance);
            break;

        default:
            errorMessage();
            break;
    }

}// view transaction

void viewDeposit(float balance)
{
FILE *f;
 f=fopen("history moneyDeposit.txt","r");
 fscanf(f,"%f",&balance);
 printf("Money is :  $%f\n",balance);
 fclose(f);

 time_t t;
 time(&t);

 f=fopen("history time and date.txt","r");
 fscanf(f,"%s",ctime(&t));
 printf("date and time is: %s\n",ctime(&t));
 fclose(f);
}// view deposit transaction history

void viewWithdraw(float balance)
{

}// view withdraw transaction history

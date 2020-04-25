#include"Functions.h"

int login(int pass)
{
    int i, count = 0, flag = 0;
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n");
    printf("****Please enter your PIN number below:****\n\n");

	do
	{
        printf("\nInput the password: ");
        scanf("%d",&pass);

        for(i = 0; i < 3; i++)
        {
            if(pass == 2020)
            {
                printf("Successful!\n");
                flag = 1;
            }
        }

        if(flag == 0)
        {
            if(count != 2)
                printf("Wrong! please try again!\n");
                count += 1;
        }

   } while(count > 0 && count < 3 && flag == 0);

   if(flag == 0)
   {
       printf("Access deny!\n");
       printf("Your account is blocked!\n");
       exit(0);
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

}// view deposit transaction history

void viewWithdraw(float balance)
{

}// view withdraw transaction history

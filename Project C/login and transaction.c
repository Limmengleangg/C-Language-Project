#include"Functions.h"

int login(int pass)
{
    int i, count = 0, flag = 0;
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please enter your PIN number below:****\n\n");

	do
	{
        printf("\nPlease enter PIN number: ");
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
       printf("Your account is blocked! Please contact to your Bank Customer Services\n");
       exit(0);
   }


    return 0;
} //user login

void transaction()
{
    int chose;

    printf("You choose to view transaction history\n\n");
    printf("Please choose transaction history view types:\n");
    printf("< 1 > Deposit\n");
    printf("< 2 > Withdraw\n");
    scanf("%d",&chose);

    switch(chose)
    {
        case 1:
            system("cls");
            viewDeposit();
            break;
        case 2:
            system("cls");
            viewWithdraw();
            break;

        default:
            errorMessage();
            break;
    }

}// view transaction

void viewDeposit()
{
    float deposit;
    time_t t;
    time(&t);
    FILE *f;

    f = fopen("history moneyDeposit.txt","r");
    if(f == NULL){
        printf("Error!\n");
        exit(1);
    }

    printf("You choose to view deposit history\n\n");

    while(fscanf(f,"%f\n",&deposit) && fscanf(f,"%[^\n]",ctime(&t)) != EOF) {
        printf("You have deposit: $%.2f\n",deposit);
        printf("Date: %s\n",ctime(&t));
    }
    fclose(f);

}// view deposit transaction history

void viewWithdraw()
{
    float withdraw;
    time_t t;
    time(&t);
    FILE *w;

    w = fopen("history moneyWithdraw.txt","r");
    if(w == NULL){
        printf("ERROR!\n");
        exit(1);
    }

    printf("You choose to view withdraw history\n\n");

    while(fscanf(w,"%f\n",&withdraw) && fscanf(w,"%[^\n]",ctime(&t)) != EOF) {
        printf("You have withdraw: $%.2f\n",withdraw);
        printf("Date: %s\n",ctime(&t));
    }
    fclose(w);

}// view withdraw transaction history

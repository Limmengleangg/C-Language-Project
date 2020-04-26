#include"Functions.h"

float moneyDeposit(float balance) //Varin
{
    float deposit;
    time_t t;
    time(&t);
    FILE *bal;
    FILE *f;

    if((bal = fopen("Balance.txt","a")) == NULL) {
        printf("ERROR!\n");
        exit(1);
    }

    f = fopen("history moneyDeposit.txt","a");
    if(f == NULL){
        printf("Error!\n");
        exit(1);
    }

    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);

    balance += deposit;
    printf("\n****Your New Balance is:   $%.2f\n\n", balance);

    fprintf(bal,"%f\n",balance);
    fprintf(f,"%f\n",deposit);
    fprintf(f,"%s\n",ctime(&t));
    fclose(bal);
    fclose(f);

    return balance;

}//money deposit

float moneyWithdraw(float balance) //Vatanak
{
    float withdraw;
    time_t t;
    time(&t);
    FILE *w;

    w = fopen("history moneyWithdraw.txt","a");
    if(w == NULL){
        printf("ERROR!\n");
        exit(1);
    }

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &withdraw);

    if (withdraw < balance) {
        balance -= withdraw;
        printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);
    }
    else  {
        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);
    }

    fprintf(w,"%f\n",withdraw);
    fprintf(w,"%s\n",ctime(&t));
    fclose(w);
    return balance;

}//money withdraw

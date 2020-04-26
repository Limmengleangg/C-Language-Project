#include"Functions.h"

void mainMenu() {

    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Display transaction history\n");
    printf("< 5 >  Exit\n\n");

}//Main Menu

void checkBalance(float balance) {
    FILE *bal;
    float deposit;
    bal = fopen("Balance.txt","a+");
    if(bal == NULL) {
        printf("ERROR!\n");
        exit(1);
    }

    printf("You Choose to See your Balance\n");

    while(fscanf(bal,"%f",&balance) != EOF) {
        balance;
    }
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);

    fclose(bal);

}//Check Balance

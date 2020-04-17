#include"Functions.h"

float moneyDeposit(float balance) //Varin
{
    float deposit;
    printf("\t\tMoney deposit\n");
    printf("Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount of deposit balance: \n");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit

float moneyWithdraw(float balance) //Vatanak
{
    float withdraw;
    printf("\t\tMoney Withdraw\n");
    printf("Your Balance is: %.2f\n\n", balance);
    printf("****Enter the amount of withdraw balance:  ");
    scanf("%f", &withdraw);

    if(balance > withdraw){
    	balance -= withdraw;
    	printf("\nYour New Balance is:   $%.2f\n\n", balance);
    }
    else if(balance < withdraw){
    	printf("\nYou do not have enough balance to withdraw\n\n");
	}
    return balance;


}//money withdraw

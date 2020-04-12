#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <stdbool.h>
#include <math.h>

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

#endif // FUNCTIONS_H_INCLUDED

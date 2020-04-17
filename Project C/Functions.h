#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <stdbool.h>
#include <math.h>

int login(int num);
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void transaction(float balance);
void viewDeposit(float balance);
void viewWithdraw(float balance);
void menuExit();
void errorMessage();
//History of user


#endif

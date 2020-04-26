#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int login(int pass);
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void transaction();
void viewDeposit();
void viewWithdraw();
void menuExit();
void errorMessage();


#endif

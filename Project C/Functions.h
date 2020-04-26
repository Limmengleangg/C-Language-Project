#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include<time.h>

int login(int num);
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


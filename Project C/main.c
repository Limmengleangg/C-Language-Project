#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"Functions.h"

//Main Code
int main() //Mengleang
{
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);

        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
            	system("CLS");
                balance = moneyWithdraw(balance);
                break;
            case 4:
                system("CLS");
                transaction(balance);
                break;
            case 5:
            	system("CLS");
                menuExit();
                return 0;
            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);

        system("CLS");
        if (choose == 2) {
            again = false;
            menuExit();
        }
    }

    return 0;
}//main code

#include <iostream>
#include <cstdlib>
#include "call.h"

void mview(){
    system("cls");
    int choice;
    cout << "\t\t------------------" << endl;
    cout << "\t\t   ---Welcome--- " << endl;
    cout << "\t\t------------------" << endl;
    cout << "\t\tWhat do you want?" << endl;
    cout << "\t\t1--> View Orders" << endl;
    cout << "\t\t2--> View Remainging Tables" << endl;
    cout << "\t\tEnter your choice:--> ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        //mview();
        break;
    case 2:
        //wview();
        break;

    default:
        cout << "\aWrong Input!!!" << endl;
        mainMenu();
        break;
    }
}
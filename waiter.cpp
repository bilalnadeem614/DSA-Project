#include "call.h"

using namespace std;

void wview()
{
    system("cls");
    int ch;
    cout << "\t\t------------------" << endl;
    cout << "\t\t   ---Welcome--- " << endl;
    cout << "\t\t------------------" << endl;
    cout << "\t\tWhat do you want?" << endl;
    cout << "\t\t1--> View Menu" << endl;
    cout << "\t\t2--> Take Order" << endl;
    cout << "\t\t3--> Back to Main Menu" << endl;
    cout << "\t\t4--> Exit the Program" << endl;
    cout << "\t\tEnter your choice:--> ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        foodMenu();
        break;
    case 2:
        TakeOrd();
        break;

    case 3:
        mMenu();
        break;

    case 4:
        return;
        break;

    default:
        cout << "\aWrong Input!!!" << endl;
        wview();
        break;
    }
}
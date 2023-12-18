#include "call.h"

using namespace std;

void mMenu()
{
    system("cls");
    int cho;
    cout << "\t\t------------------" << endl;
    cout << "\t\t   ---Welcome--- " << endl;
    cout << "\t\t------------------" << endl;
    cout << "\t\tHow do you want to continue?" << endl;
    cout << "\t\t1--> Manager" << endl;
    cout << "\t\t2--> Waiter" << endl;
    cout << "\t\t3--> Exit the Program" << endl;
    cout << "\t\tEnter your choice:--> ";
    cin >> cho;

    switch (cho)
    {
    case 1:
        mview();
        break;
    case 2:
        wview();
        break;

    case 3:
        return;
        break;

    default:
        cout << "\aWrong Input!!!" << endl;
        mMenu();
        break;
    }
}

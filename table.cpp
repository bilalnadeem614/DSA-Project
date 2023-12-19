#include "call.h"

using namespace std;

int custTable = 1;
void table()
{
    cout << "You can wait on Table no." << custTable << endl;
    custTable++;
    cout << "Proceed back to Main Menu(Y)" << endl;
    char ch;
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    {
        mMenu();
    }
    else{
        mMenu();
    }
}
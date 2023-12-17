#include <iostream>
#include <cstdlib>

using namespace std;

void mainMenu()
{
    system("cls");
    int choice;
    cout << "\t\t------------------" << endl;
    cout << "\t\t   ---Welcome--- " << endl;
    cout << "\t\t------------------" << endl;
    cout << "\t\tHow do you want to continue?" << endl;
    cout << "\t\t1--> Manager" << endl;
    cout << "\t\t2--> Waiter" << endl;
    cout<<"\t\tEnter your choice:--> ";
    cin>>choice;
    

    switch (choice)
    {
    case 1:

        break;
    case 2:

        break;

    default:
        cout << "\aWrong Input!!!" << endl;
        mainMenu();
        break;
    }
}
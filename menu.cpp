#include "call.h"

using namespace std;

class node
{
public:
    string itemName;
    int itemPrice;
    node *next;

    node(string iPN, int iPr) : itemName(iPN), itemPrice(iPr), next(nullptr)
    {
    }
};

class menuList
{
private:
    node *headPtr = nullptr;

public:
    // Function to insert a node in the Menu
    void insertInMenu(string n, int p)
    {
        node *newNode = new node(n, p);
        newNode->next = headPtr;
        headPtr = newNode;
    }

    // Function to display the Menu
    void displayMenu()
    {
        node *temp = headPtr;
        while (temp != nullptr)
        {
            cout << "\t\t" << temp->itemName << " " << temp->itemPrice << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};

void foodMenu()
{
    system("cls");
    menuList meatMenu;

    meatMenu.insertInMenu("Chicken", 1200);
    meatMenu.insertInMenu("Beef", 2500);
    meatMenu.insertInMenu("Fried Fish", 2200);

    cout << "\t\tMeat Items (Rates per KG)" << endl;
    meatMenu.displayMenu();

    cout << "\t\t-------------------------------" << endl;

    menuList vegMenu;

    vegMenu.insertInMenu("Daal Chana", 300);
    vegMenu.insertInMenu("Daal Massh", 300);
    vegMenu.insertInMenu("Daal Chana", 250);
    vegMenu.insertInMenu("Sabzi", 250);

    cout << "\t\tVeg Items (Rates per Plate)" << endl;
    vegMenu.displayMenu();

    cout << "\t\t-------------------------------" << endl;
    cout << endl;

    cout << "Do you want to give order(Y/N):--> ";
    char ch;
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        TakeOrd();
    }
    else
    {
        table();
    }
}
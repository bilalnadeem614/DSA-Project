#include "call.h"

using namespace std;

struct menuItems
{
    int Chicken = 1200;
    int Beef = 2500;
    int FriedFish = 2200;
    int DaalMassh = 300;
    int DaalChana = 250;
    int Sabzi = 250;
};

// Order structure representing an item and quantity
struct Order
{
    string itemName;
    int quantity;
    int price;

    Order(string name, int qty, int pr) : itemName(name), quantity(qty), price(pr) {}
};

// Function to take orders with predefined menu items
void takeOrders(queue<Order> &orders)
{
    system("cls");
    menuItems items;
    char choice;
    do
    {
        cout << "Menu Items:" << endl;
        cout << "1. Chicken\t Rs.1200(per Kg)\n2. Beef\t Rs.2500(per Kg)\n3. Fried Fish\t Rs.2200(per Kg)\n4. Daal Chana\t Rs.250(per Plate) \n5. Daal Massh \tRs.300 (per Plate)\n6. Sabzi\tRs.200(per Plate) \n"
             << endl;

        int option;
        cout << "Enter the item number:--> ";
        cin >> option;

        if (option < 1 || option > 7)
        {
            cout << "Invalid item number. Please choose a valid option." << endl;
            // continue;
            TakeOrd();
        }

        int quantity;
        cout << "Enter the quantity: ";
        cin >> quantity;

        Order order("", 0, 0);
        switch (option)
        {
        case 1:
            order = Order("Chicken", quantity, items.Chicken * quantity);
            break;
        case 2:
            order = Order("Beef", quantity, items.Beef * quantity);
            break;
        case 3:
            order = Order("Fried Fish", quantity, items.FriedFish * quantity);
            break;
        case 4:
            order = Order("Daal Chana", quantity, items.DaalChana * quantity);
            break;
        case 5:
            order = Order("Daal Massh", quantity, items.DaalMassh * quantity);
            break;
        case 6:
            order = Order("Sabzi", quantity, items.Sabzi * quantity);
            break;
        }

        orders.push(order);

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
    mMenu();
}

// Function to display all orders in the queue
void displayOrders(const queue<Order> &orders)
{
    queue<Order> tempQueue = orders;
    if (tempQueue.empty())
    {
        cout << "There is No order placed" << endl;
    }
    

    cout << "Current Orders in the Queue:" << endl;

    while (!tempQueue.empty())
    {
        Order currentOrder = tempQueue.front();
        cout << "Item: " << currentOrder.itemName << "\n Quantity: " << currentOrder.quantity << "\n Price: " << currentOrder.price << "\n"
             << endl;
        tempQueue.pop();
    }

    cout << "Enter (Y/y) to back to main menu" << endl;

    char ch;
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    {
        mMenu();
    }
    else
    {
        mMenu();
    }
    return;
}
queue<Order> orders;
void TakeOrd()
{
    system("cls");

    // Taking orders
    takeOrders(orders);

    // Displaying orders
   // displayOrders(orders);
}

void OView()
{
    displayOrders(orders);
}
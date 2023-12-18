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
    menuItems items;
    char choice;
    do
    {
        cout << "Menu Items:" << endl;
        cout << "1. Chicken\n2. Beef\n3. Fried Fish\n4. Daal Chana\n5. Daal Massh\n6. Daal Sabzi\n7. Sabzi\n";

        int option;
        cout << "Enter the item number: ";
        cin >> option;

        if (option < 1 || option > 7)
        {
            cout << "Invalid item number. Please choose a valid option." << endl;
            continue;
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
}

// Function to display all orders in the queue
void displayOrders(const queue<Order> &orders)
{
    cout << "Current Orders in the Queue:" << endl;

    queue<Order> tempQueue = orders;
    while (!tempQueue.empty())
    {
        Order currentOrder = tempQueue.front();
        cout << "Item: " << currentOrder.itemName << " (Quantity: " << currentOrder.quantity << ", Price: " << currentOrder.price << ")" << endl;
        tempQueue.pop();
    }

    cout << "End of orders." << endl;
}

void TakeOrd(){
    queue<Order> orders;

    // Taking orders
    takeOrders(orders);

    // Displaying orders
    displayOrders(orders);
}
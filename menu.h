#include <iostream>
#include <cstdlib>
#include "call.h"

class node
{
public:
    int itemPrice;
    string itemName;
    node *next;

    node(int pr) : itemPrice(pr), next(nullptr)
    {
    }
};
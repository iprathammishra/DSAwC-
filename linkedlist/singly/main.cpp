#include <iostream>
#include "classes.h"

using namespace std;

int main()
{
    LinkedList lst;
    lst.insertNodeAtFront(10);
    lst.insertNodeAtEnd(40);
    lst.insertNodeAtEnd(50);
    lst.insertAtPosition(2, 20);
    lst.insertAtPosition(3, 30);
    lst.search(30);
    lst.deleteNode(30);
    lst.displayList();
    return 0;
}
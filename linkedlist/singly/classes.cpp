#include <iostream>
#include "classes.h"
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

void LinkedList::insertNodeAtFront(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::insertNodeAtEnd(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
        return;
    }
}

void LinkedList::insertAtPosition(int pos, int value)
{
    Node *prev = new Node;
    Node *current = new Node;
    current = head;
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (pos < 1)
    {
        cout << "Position cannot be less than one.";
    }
    else if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            prev = current;
            current = current->next;
            if (current == NULL)
            {
                cout << "Invalid position.";
                return;
            }
        }
        prev->next = newNode;
        newNode->next = current;
    }
}

void LinkedList::search(int value)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == value)
        {
            cout << "Element " << value << " is found." << endl;
            return;
        }
        current = current->next;
    }
    cout << "Element" << value << " not found in the List";
}

void LinkedList::displayList()
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

void LinkedList::deleteNode(int value)
{
    bool flag = false;
    Node *current = new Node;
    Node *previous = new Node;
    previous = head;
    current = head;
    while (current != NULL)
    {
        if (current->data == value && current == head)
        {
            head = current->next;
            free(current);
            flag = true;
            break;
        }
        else if (current->data == value)
        {
            previous->next = current->next;
            if (current == tail)
            {
                tail = previous;
            }
            free(current);
            flag = true;
            break;
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }
    if (flag == true)
    {
        cout << "Element deleted." << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
}
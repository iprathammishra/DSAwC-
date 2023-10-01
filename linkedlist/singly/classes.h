#ifndef CLASSES_H
#define CLASSES_H

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head, *tail;
    LinkedList();

    void insertNodeAtFront(int value);
    void insertNodeAtEnd(int value);
    void insertAtPosition(int pos, int value);
    void search(int value);
    void displayList();
    void deleteNode(int value);
};

#endif
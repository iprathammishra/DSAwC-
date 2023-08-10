#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void reverse(Node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    reverse(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    print();
    cout << endl;
    reverse(head);
    print();
    return 0;
}
#include <iostream>
using namespace std;
#define MAX 10
class Stack
{
    int top;

public:
    int arr[MAX];
    Stack()
    {
        top = -1;
    }
    void push(int item);
    int pop();
    int peek();
};
// Insert an element into a Stack: - push() operation
void Stack::push(int item)
{
    if (top >= (MAX - 1))
    {
        cout << "\nStack Overflow.";
    }
    else
    {
        arr[++top] = item;
        cout << "\nElement added: " << item;
    }
}
// Remove an element from a stack: - pop()
int Stack::pop()
{
    if (top < 0)
    {
        cout << "\nStack Underflow.";
        return -1;
    }
    else
    {
        int item = arr[top--];
        return item;
    }
}
// Retrieve the topmost element: - peek()
int Stack::peek()
{
    if (top < 0)
    {
        cout << "\nStack Underflow.";
        return -1;
    }
    else
    {
        int item = arr[top];
        return item;
    }
}
// Driver Program
int main()
{
    Stack st;
    st.push(8);
    st.push(4);
    st.push(5);
    st.push(9);
    int value = st.pop();
    if (value != 1)
    {
        cout << "\nDeleted element: " << value;
    }
    int top = st.peek();
    if (top != 1)
    {
        cout << "\nTop element: " << top;
    }
    return 0;
}
// Implementation of stack using array
#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;

// display the stack
void display()
{
    // check if stack is empty
    if (top == -1)
    {
        cout << "\nStack is empty.\n"
             << endl;
    }
    else
    {
        cout << "\nStack elements are: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

// push
void push()
{
    // check if stack is full
    if (top == n - 1)
    {
        cout << "\nStack overflow." << endl;
    }
    else
    {
        int val;
        cout << "Enter a value to push: ";
        cin >> val;
        top++;
        stack[top] = val;
        cout << "\nValue inserted.\n"
             << endl;
    }
}

// pop
void pop()
{
    // check if stack is empty
    if (top == -1)
    {
        cout << "\nStack underflow.\n"
             << endl;
    }
    else
    {
        cout << "\nPopped element is: " << stack[top] << endl;
        top--;
    }
}

// driver code
int main()
{
    int ch;
    cout << "1. Push." << endl;
    cout << "2. Pop." << endl;
    cout << "3. Display the stack." << endl;
    cout << "4. Exit." << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "\nExited.\n"
                 << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (ch != 4);
}

// A menu driven program to implement all functions in linked list
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *head = NULL;

// display
void display()
{
    node *n = head;
    if (head == NULL)
    {
        cout << "\nList is empty.\n"
             << endl;
    }
    else
    {
        cout << "\nLinked list elements are: ";
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
        cout << endl;
    }
}

// searching
void search()
{
    if (head == NULL)
    {
        cout << "\nSorry! List is empty.\n"
             << endl;
    }
    else
    {
        node *n = head;
        int val, count = 0;
        cout << "\nEnter a value to search: ";
        cin >> val;

        while (n != NULL)
        {
            count++;
            if (n->data == val)
            {
                cout << val << " is present at node " << count << endl;
                break;
            }
            n = n->next;
            if (n == NULL)
            {
                cout << val << " is not present in the list." << endl;
            }
        }
        cout << endl;
    }
}

// updation
void update()
{
    if (head == NULL)
    {
        cout << "\nSorry! List is empty." << endl;
    }
    else
    {
        int pos, val;
        cout << "Enter the node position which you want to update: ";
        cin >> pos;
        cout << "Enter a value to replace node " << pos << ": ";
        cin >> val;

        node *n = head;
        for (int i = 1; i < pos; i++)
        {
            n = n->next;
            if (n == NULL)
                cout << "\nSorry! node is out of bound." << endl;
        }
        n->data = val;
        cout << "\nNode updated.\n"
             << endl;
    }
}

// insertion
void insertion()
{
    int val;
    cout << "Enter a value to insert: ";
    cin >> val;

    node *n = new node();
    n->data = val;

    if (head == NULL)
    {
        n->next = NULL;
        head = n;
        cout << "\nNode inserted at position 1.\n"
             << endl;
    }
    else
    {
        int pos;
        cout << "Enter the node position at which you want to insert: ";
        cin >> pos;

        node *temp = head;
        if (pos == 1)
        {
            n->next = head;
            head = n;
        }
        else
        {
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
        cout << "\nNode inserted at position " << pos << ".\n"
             << endl;
    }
}

// deletion
void deletion()
{
    if (head == NULL)
    {
        cout << "\nSorry! List is already empty.\n"
             << endl;
    }
    else
    {
        int pos;
        cout << "Enter the node position you want to delete: ";
        cin >> pos;

        if (pos == 1)
        {
            head = head->next;
        }
        else
        {
            node *n = head;
            for (int i = 1; i < pos - 1; i++)
            {
                n = n->next;
            }
            if (n->next->next == NULL)
            {
                n->next = NULL;
            }
            else
            {
                n->next = n->next->next;
            }
        }
        cout << "\nNode successfully deleted.\n"
             << endl;
    }
}

// driver code
int main()
{
    int ch;
    cout << "1. Display the List." << endl;
    cout << "2. Insert into the List." << endl;
    cout << "3. Delete from the List." << endl;
    cout << "4. Search in the List." << endl;
    cout << "5. Update in the List." << endl;
    cout << "6. Exit." << endl;

    do
    {
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            insertion();
            break;
        case 3:
            deletion();
            break;
        case 4:
            search();
            break;
        case 5:
            update();
            break;
        case 6:
            cout << "\nExited.\n"
                 << endl;
            break;
        default:
            cout << "Invalid choice.\n"
                 << endl;
        }
    } while (ch != 6);
}

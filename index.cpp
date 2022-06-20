// Menu Driven program for all Data Structures
#include <iostream>
using namespace std;

/* Declarations of all Data Types used in this program */
// node of Linear Linked List
class nodell
{
public:
    int data;
    nodell *next;
};
nodell *head = NULL;

// 2-D array declaration
int arr[4][4];

// stack using array
int stack[100], s_size = 100, top = -1;

// stack using linked list
class stackll
{
public:
    int data;
    stackll *next;
};
stackll *topList = NULL;

// Queue using array
int queue[100], q_size = 100, front = -1, rear = -1;

// Queue using Linked List
class queuell
{
public:
    int data;
    queuell *next;
};
queuell *frontList = NULL;
queuell *rearList = NULL;

/* Declaration of All functions used in this program */
void arrays();      // Main array
void linkedLists(); // Main Linked List
void stacks();      // Main stack
void queues();      // Main queues

void arrayOne(); // 1-D array
void arrayTwo(); // 2-D array

void stackArray(); // Stack using array
void stackList();  // Stack using Linked List

void queueArray(); // Queue using array
void queueList();  // Queue using Linked List

void display1d(int a[], int n);        // Display 1-D array
int search1d(int a[], int n, int val); // search 1-D array
void update1d(int a[], int n);         // update 1-D array

void display2d(int a[4][4]);        // display 2-D array
int search2d(int a[4][4], int val); // search 2-D array
void update2d(int a[4][4]);         // update 2-D array

void displayll();   // display linear linked list
void searchll();    // search linear linked list
void updatell();    // update linear linked list
void insertionll(); // insert linear linked list
void deletionll();  // delete linear linked list

void displayStackArray(); // display stack array
void pushStackArray();    // push stack array
void popStackArray();     // pop stack array

void displayStackList(); // display stack list
void pushStackList();    // push stack list
void popStackList();     // pop stack list

void displayQueueArray(); // display queue array
void enqueueArray();      // enqueue queue array
void dequeueArray();      // dequeue queue array

void displayQueueList(); // display queue list
void enqueueList();      // enqueue queue list
void dequeueList();      // dequeue queue list

// Main code
int main()
{
    int ch;
    cout << "\n*** Welcome to DSA Land ***\n"
         << endl;

    do
    {
        cout << "\n------------------------------------------------" << endl;
        cout << "Which Data Structure do you want to visit ?\n"
             << endl;
        cout << "1. Arrays" << endl;
        cout << "2. Linked Lists" << endl;
        cout << "3. Stacks" << endl;
        cout << "4. Queues" << endl;
        // cout << "5. Trees" << endl;
        // cout << "6. Graphs" << endl;
        cout << "\nPress 0 to exit.";
        cout << "\nEnter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            arrays();
            break;
        case 2:
            linkedLists();
            break;
        case 3:
            stacks();
            break;
        case 4:
            queues();
            break;
        case 5:
        case 6:
        case 0:
            cout << "\nThanks for visiting!\n"
                 << endl;
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

/* Main Functions declaration starts */
// Arrays
void arrays()
{
    int ch;
    cout << "\n---Welcome to Arrays---\n"
         << endl;
    do
    {
        cout << "Which type of Array do you want to explore ?" << endl;
        cout << "1. 1-D Array" << endl;
        cout << "2. 2-D Array" << endl;
        cout << "\nPress 0 to return to Main Menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            arrayOne();
            break;
        case 2:
            arrayTwo();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Stacks
void stacks()
{
    int ch;
    cout << "\n---Welcome to Stacks---\n"
         << endl;
    do
    {
        cout << "Which type of Stack do you want to explore ?" << endl;
        cout << "1. Stack using Array" << endl;
        cout << "2. Stack using Linked List" << endl;
        cout << "\nPress 0 to return to Main Menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            stackArray();
            break;
        case 2:
            stackList();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Queues
void queues()
{
    int ch;
    cout << "\n---Welcome to Queues---\n"
         << endl;
    do
    {
        cout << "Which type of Queue do you want to explore ?" << endl;
        cout << "1. Queue using Array" << endl;
        cout << "2. Queue using Linked List" << endl;
        cout << "\nPress 0 to return to Main Menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            queueArray();
            break;
        case 2:
            queueList();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}
/* Main Functions declaration ends */

/* Second Menu Functions starts */
// 1-D Array
void arrayOne()
{
    int ch;
    cout << "\n---Welcome to 1-D Array---\n"
         << endl;
    int n;
    cout << "Enter a size to create an array for: ";
    cin >> n;
    int a[n];
    cout << "\nGood, now enter elements for this array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]-> ";
        cin >> a[i];
    }
    cout << "\n\n";
    cout << "Choose between these operations...." << endl;
    cout << "1. Display the Array" << endl;
    cout << "2. Search an element" << endl;
    cout << "3. Update an element" << endl;
    do
    {
        cout << "\nPress 0 to return to previous menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n";

        switch (ch)
        {
        case 1:
            display1d(a, n);
            break;
        case 2:
        {
            int val;
            cout << "Enter an element to search: ";
            cin >> val;
            int ans = search1d(a, n, val);
            if (ans == -1)
                cout << val << " is not present in the array." << endl;
            else
                cout << val << " is present at index " << ans << endl;
        }
        break;
        case 3:
            update1d(a, n);
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// 2-D Array
void arrayTwo()
{
    int ch;
    cout << "\n---Welcome to 2-D Array---\n"
         << endl;
    int m = 4, n = 4;
    cout << "\nJust for reference, we are taking a 4x4 2-D array/matrix." << endl;

    cout << "\nEnter " << m * n << " array elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]-> ";
            cin >> arr[i][j];
        }
    }
    cout << "\n\n";
    cout << "Choose between these operations...." << endl;
    cout << "1. Display the Array" << endl;
    cout << "2. Search an element" << endl;
    cout << "3. Update an element" << endl;
    do
    {
        cout << "\nPress 0 to return to previous menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            display2d(arr);
            break;
        case 2:
        {
            int val;
            cout << "Enter a value to search: ";
            cin >> val;
            int ans = search2d(arr, val);
            if (ans == -1)
                cout << val << " is not present in the array." << endl;
            else
                cout << val << " is present at index " << ans << endl;
        }
        break;
        case 3:
            update2d(arr);
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Linear Linked List
void linkedLists()
{
    int ch;
    cout << "\n---Welcome to Linear Linked List---\n"
         << endl;
    cout << "Choose between these operations...." << endl;
    cout << "1. Display the List items" << endl;
    cout << "2. Search an element" << endl;
    cout << "3. Update a node" << endl;
    cout << "4. Insert a node" << endl;
    cout << "5. Delete a node" << endl;
    do
    {
        cout << "\nPress 0 to return to main menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            displayll();
            break;
        case 2:
            searchll();
            break;
        case 3:
            updatell();
            break;
        case 4:
            insertionll();
            break;
        case 5:
            deletionll();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Stack using array
void stackArray()
{
    int ch;
    cout << "\n---Welcome to Stack (array)---\n"
         << endl;
    cout << "Choose between these operations...." << endl;
    cout << "1. Push into the Stack" << endl;
    cout << "2. Pop from the Stack" << endl;
    cout << "3. Display the Stack" << endl;
    do
    {
        cout << "\nPress 0 to return to previous menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            pushStackArray();
            break;
        case 2:
            popStackArray();
            break;
        case 3:
            displayStackArray();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Stack using linked list
void stackList()
{
    int ch;
    cout << "\n---Welcome to Stack (Linked List)---\n"
         << endl;
    cout << "Choose between these operations...." << endl;
    cout << "1. Push into the Stack" << endl;
    cout << "2. Pop from the Stack" << endl;
    cout << "3. Display the Stack" << endl;
    do
    {
        cout << "\nPress 0 to return to previous menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            pushStackList();
            break;
        case 2:
            popStackList();
            break;
        case 3:
            displayStackList();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Queue using array
void queueArray()
{
    int ch;
    cout << "\n---Welcome to Queue (array)---\n"
         << endl;
    cout << "Choose between these operations...." << endl;
    cout << "1. Enqueue the Queue" << endl;
    cout << "2. Dequeue the Queue" << endl;
    cout << "3. Display the Queue" << endl;
    do
    {
        cout << "\nPress 0 to return to previous menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            enqueueArray();
            break;
        case 2:
            dequeueArray();
            break;
        case 3:
            displayQueueArray();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}

// Queue using linked list
void queueList()
{
    int ch;
    cout << "\n---Welcome to Queue (Linked List)---\n"
         << endl;
    cout << "Choose between these operations...." << endl;
    cout << "1. Enqueue the Queue" << endl;
    cout << "2. Dequeue the Queue" << endl;
    cout << "3. Display the Queue" << endl;
    do
    {
        cout << "\nPress 0 to return to previous menu." << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n\n";

        switch (ch)
        {
        case 1:
            enqueueList();
            break;
        case 2:
            dequeueList();
            break;
        case 3:
            displayQueueList();
            break;
        case 0:
            break;
        default:
            cout << "\nInvalid Choice.\n"
                 << endl;
        }
    } while (ch != 0);
}
/* Second Menu Functions ends */

/* Working Functions starts */
// display 1-D array
void display1d(int a[], int n)
{
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\n";
}

// search 1-D array
int search1d(int a[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i;
    }
    return -1;
}

// update 1-D array
void update1d(int a[], int n)
{
    display1d(a, n);
    int pos, val;
    cout << "\nEnter the index which you want to update: ";
    cin >> pos;

    if (pos > n - 1)
    {
        cout << "\n"
             << pos << " is beyond size of this array!. Enter again." << endl;
    }
    else
    {
        cout << "Enter a value to replace index " << pos << ": ";
        cin >> val;

        a[pos] = val;

        cout << "\nArray after updation: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n\n";
    }
}

// display 2-D array
void display2d(int a[4][4])
{
    cout << "\nArray elements are: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

// search in 2D arrray
int search2d(int a[4][4], int val)
{
    display2d(a);
    int ans[2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == val)
            {
                ans[0] = i;
                ans[j] = j;
            }
        }
    }
    ans[0] = -1;
    return ans[2];
}

// update 2D array
void update2d(int a[4][4])
{
    int x, y, val;
    cout << "Enter index position which you want to update: " << endl;
    cout << "Row index: ";
    cin >> x;
    cout << "Column index: ";
    cin >> y;

    if (x > 3 || y > 3)
    {
        cout << "\nThis index is beyond size of array." << endl;
    }
    else
    {
        cout << "\nEnter a value to replace a[" << x << "][" << y << "]: ";
        cin >> val;

        a[x][y] = val;
        cout << "\nArray Updated!" << endl;
        display2d(a);
        cout << "\n\n";
    }
}

// display linear linked list
void displayll()
{
    nodell *n = head;
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
            cout << n->data << "->";
            n = n->next;
        }
        cout << "\n\n";
    }
}

// searching linear list
void searchll()
{
    if (head == NULL)
    {
        cout << "\nSorry! List is empty.\n"
             << endl;
    }
    else
    {
        nodell *n = head;
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
        cout << "\n\n";
    }
}

// updating linear linked list
void updatell()
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

        nodell *n = head;
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

// inserting linear linked list
void insertionll()
{
    int val;
    cout << "Enter a value to insert: ";
    cin >> val;

    nodell *n = new nodell();
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

        nodell *temp = head;
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

// deleting linear linked list
void deletionll()
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
            nodell *n = head;
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

// display stack using array
void displayStackArray()
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

// push stack using array
void pushStackArray()
{
    // check if stack is full
    if (top == s_size - 1)
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

// pop stack using array
void popStackArray()
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

/* Functions of Stack using Linked List */
// display the stack
void displayStackList()
{
    if (topList == NULL)
    {
        cout << "\nSorry! Stack is empty." << endl;
    }
    else
    {
        stackll *n = topList;
        cout << "\nStack elements are: ";
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }
    cout << "\n\n";
}

// pushing in stack linked list
void pushStackList()
{
    int val;
    cout << "Enter a value to push: ";
    cin >> val;

    stackll *n = new stackll();
    n->data = val;
    if (topList == NULL)
    {
        n->next = NULL;
        topList = n;
    }
    else
    {
        n->next = topList;
        topList = n;
    }
    cout << "\nNode inserted." << endl;
}

// pop in stack using list
void popStackList()
{
    if (topList == NULL)
    {
        cout << "\nSorry! Stack underflow." << endl;
    }
    else
    {
        cout << "\nElement deleted from stack is: " << topList->data << endl;
        topList = topList->next;
    }
}
/* Function of Queue using array */
// display queue using array
void displayQueueArray()
{
    if (front == -1 || front > rear)
    {
        cout << "\nQueue is empty." << endl;
    }
    else
    {
        cout << "\nQueue elements are: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

// insert queue using array
void enqueueArray()
{
    if (rear == q_size - 1)
    {
        cout << "\nQueue overflow.\n"
             << endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        int val;
        cout << "Enter a value to insert: ";
        cin >> val;
        rear++;
        queue[rear] = val;
        cout << "Value inserted.\n"
             << endl;
    }
}

// delete queue using array
void dequeueArray()
{
    if (front == -1 || front > rear)
    {
        cout << "\nQueue underflow.\n"
             << endl;
    }
    else
    {
        cout << "\nDeleted element is: " << queue[front] << endl;
        front++;
    }
}

/* Functions of Queue using Linked List */
// display the queue
void displayQueueList()
{
    if (frontList == NULL && rearList == NULL)
    {
        cout << "\nSorry! Queue is empty." << endl;
    }
    else
    {
        queuell *n = frontList;
        cout << "\nQueue elements are: ";
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }
    cout << "\n\n";
}

// enqueue the queue linked list
void enqueueList()
{
    int val;
    cout << "Enter a value to insert: ";
    cin >> val;

    queuell *n = new queuell();
    n->data = val;
    if (rearList == NULL)
    {
        n->next = NULL;
        rearList = n;
        frontList = rearList;
    }
    else
    {
        n->next = NULL;
        rearList->next = n;
        rearList = n;
    }
    cout << "\nNode inserted." << endl;
}

// pop in queue using list
void dequeueList()
{
    queuell *n = frontList;
    if (frontList == NULL)
    {
        cout << "\nSorry! Queue underflow." << endl;
    }
    else
    {
        if (n->next != NULL)
        {
            n = n->next;
            cout << "Element deleted from queue is: " << frontList->data << endl;
            free(frontList);
            frontList = n;
        }
        else
        {
            cout << "Element deleted from queue is: " << frontList->data << endl;
            free(frontList);
            frontList = NULL;
            rearList = NULL;
        }
        cout << "\nNode deleted." << endl;
    }
}
/* Working Functions ends */

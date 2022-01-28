
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// to display linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// taking reference as head changes.. if there is no node earlier.
void insertTail(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        // if list is empty we will directly add node
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        // traversing to the last element
        temp = temp->next;
    }

    // it will add pointer to new node n
    temp->next = n;
}

// reverse a linked list
node *reverseIterate(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr = head->next; // head->next means (*head).next

    if (head == NULL)
    {
        cout << "EMPTY LIST";
        return NULL;
    }

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

int main()
{
    node *head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);

    display(head);

    // reversing a list
    node *newhead = reverseIterate(head);
    display(newhead);

    return 0;
}
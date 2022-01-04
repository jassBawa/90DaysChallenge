#include <iostream>
#include <stdlib.h>
using namespace std;

// Using malloc function

class Node
{
public:
    int data;
    class Node *next;
};

void linkedListTraversal(class Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Allocating memory in heap using malloc
    head = (class Node *)malloc(sizeof(class Node));
    second = (class Node *)malloc(sizeof(class Node));
    third = (class Node *)malloc(sizeof(class Node));
    fourth = (class Node *)malloc(sizeof(class Node));

    head->data = 8;
    head->next = second;

    second->data = 123;
    second->next = third;

    third->data = 12332;
    third->next = fourth;

    fourth->data = 22;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}
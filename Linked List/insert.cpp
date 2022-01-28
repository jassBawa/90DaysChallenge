// Inserting linked list, deletion in linked list

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};

void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;   
}

// taking reference as head changes.. if there is no node earlier.
void insertTail(node* &head, int value){
    node* n = new node(value);
    if (head==NULL)
    {
        // if list is empty we will directly add node
        head = n;
        return;
    }
    
    node* temp = head;
    while (temp->next!= NULL)
    {
        // traversing to the last element
        temp= temp->next;
    }
    
    // it will add pointer to new node n
    temp->next = n;
}

void insertHead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}
int main()
{
    node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);

    
    display(head);

    insertHead(head, 7);
    insertHead(head, 31);
    insertHead(head, 41);

    
    display(head);
    return 0;
}
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

void insertHead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if (temp->data==key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node* head = NULL;

    insertHead(head, 7);
    insertHead(head, 31);
    insertHead(head, 41);

    
    display(head);

    cout<<search(head, 31)<<endl;
    return 0;
}
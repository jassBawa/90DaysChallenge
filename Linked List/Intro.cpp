// intro to linked list

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
    while (head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;   
}



int main()
{
    // declaring nodes with some data and next = NULL
    node* n1 = new node(12);
    node* n2 = new node(13);
    node* n3 = new node(14);

    // Updating the next pointer
    // -> firstly defernces then get the value
    node* head = n1;
    n1->next = n2;
    n2->next = n3;
    
    display(head);

    return 0;
}
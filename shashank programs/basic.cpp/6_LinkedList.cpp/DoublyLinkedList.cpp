#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &tail, Node* &head, int d)
{
    //empty list
    if(head==NULL)
    {
        Node* temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
    Node *temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void InsertAtTail(Node* &tail, Node* &head, int d)
{
    if(tail==NULL)
    {
        Node *temp = new Node(d);
        tail=temp;
        head=temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    //insert at start
    if(position==1)
    {
        InsertAtHead(tail,head,d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while(cnt < position -1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL)
    {
        InsertAtTail(tail,head,d);
        return;
    }
    //creating a Node
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
    }
void Delete(int position,Node* &head)
{
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //delete any middle or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt < position)
        {
            prev = curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}    

void print(Node* head)
{
    if(head==NULL)
    {
        cout <<"List Empty" << endl;
    }
    Node* temp =head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
 
    InsertAtHead(tail,head,11);
    print(head);
    
    InsertAtHead(tail,head,13);
    print(head);

    InsertAtHead(tail,head,8);
    print(head);
    
    InsertAtTail(tail,head,25);
    print(head);

    InsertAtPosition(tail,head,3,7);
    print(head);

    Delete(3,head);
    print(head);
}
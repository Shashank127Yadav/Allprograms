#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

/*Node* reverseLL(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL)
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
return prev;
}*/


//RECURSIVE METHOD
//it will return the head of the reverse list
Node* reverse1(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* chotahead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}  

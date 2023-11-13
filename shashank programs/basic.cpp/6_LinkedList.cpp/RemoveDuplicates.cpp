#include<iostream>
using namespace std;
class Node
{
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    Node* removeLoop(Node* head)
    {
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->next!=NULL && curr->next->data==curr->data)
        {
            delete curr->next;
            curr->next=curr->next->next;

        }
        else{
        curr=curr->next;
    }
    }
    return head;
    }
};
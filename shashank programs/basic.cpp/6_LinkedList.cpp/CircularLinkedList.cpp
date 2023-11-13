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
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"value="<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int d)
{
    //empty list
    if(tail==NULL)
    {
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        //elemet foud,curr representing element wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* &tail)
{
  //empty list
  if(tail==NULL)
  {
    cout<<"List is Empty"<<endl;
    return;
  }
  Node* temp=tail;
  do{
    cout<<tail->data<<" ";
        tail=tail->next;
  }while(tail!=temp);
  
}

void deleteNode(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    else{
        //non empty
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //1 Node in Linked List
        if(curr==prev)
        {
            tail=NULL;
        }
        //>=2 Node in Linked List
        else if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
 Node* tail=NULL;
 insertNode(tail,5,3);
 print(tail);

 insertNode(tail,3,5);
 print(tail);

 insertNode(tail,5,7);
 print(tail);

 insertNode(tail,7,9);
 print(tail);

 insertNode(tail,3,4);
 print(tail);

 deleteNode(tail,5);
 print(tail);
}
#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    public:
    int size;
    int *arr;
    int top;
    //constructor
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek()
    {
    if(top>=0)
    return arr[top];
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st(5);

    st.push(12);
    st.push(27);
    st.push(7);
    st.push(77);
    st.push(11);
    cout<< st.peek() <<endl;
    
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is Not Empty"<<endl;
    }
    return 0;
}
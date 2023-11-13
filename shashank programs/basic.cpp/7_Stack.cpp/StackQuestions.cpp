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

/*//1.Reverse the string
char* reverse(char* S,int len)
{
    stack<char>st;
    for(int i=0; i<len; i++)
    {
        st.push(S[i]);
    }
    for(int i=0;i<len;i++)
    {
        char c=st.top();
        st.pop();
        S[i]=c;
    }
    return S;
}*/




/*//2.Delete the middle element of stack
    void deleteMiddle(stack<char>&st)
    {
        stack<char>temp;
        int n = st.size();
        int count = 0;
        //Put first n/2 element of st into temp
        while(count<n/2)
        {
            char c = st.top();
            st.pop();
            temp.push(c);
            count++;
        }
        //Delete middle element
        st.pop();
        //Now put all n/2 element  of temp into st
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }*/




/*//3.Check valid parenthesis
    bool isvalidParenthesis(string expr)
    {    
        //create a temp stack
        stack<char>temp;
        for(int i=0; i<expr.length();i++)
        {
            if(temp.empty())
            {
                temp.push(expr[i]);
            }
            else if ((temp.top()=='(' && expr[i]==')')
                  || (temp.top()=='{' && expr[i]=='}')
         `                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       || (temp.top()=='[' && expr[i]==']'))
                  {
                    //if we found any complete bracket then pop
                    temp.pop();
                  }
        else
        {
            temp.push(expr[i]);
        }
        
        if(temp.empty())
        return true;
        }
        return false;
    }*/

/*//4.Insert element at the bottom of the stack
void insertAtBottom(stack<int>&s, int element)
    {
        if(s.empty())
        {
        s.push(element);
        return;
        }

        int num=s.top();
        s.pop();

        //recursive call
        insertAtBottom(s,element);
        s.push(num);
    }*/




/*Method.2
//Insert element at the bottom of the stack
void insertToBottom(stack<int>S,int N)
{
    //create a temporary stack temp
    stack<int>temp;

    //Iterate until S is empty
    while(!S.empty())
    {
        //Push the top elements of stack S into the stack temp umtil S empty 
        temp.push(S.top());
        //Now the top element is pop from S
        S.pop();
    }
    //Push the N(element to inserted at bottom) into the stack S(Now is S Empty)
    S.push(N);
    //Iterate until temp is empty
    while(!temp.empty())
    {
        //Push the top elements of Stack temp into Stack S until temp empty
        S.push(temp.top());
    }
    //Pop the top elments of stack temp
    temp.pop();

    //print the elements of stack S
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
    }*/
 



    /*//5.Reverse Stack Using Recursion
    void insertAtBottom(stack<int>&s, int element)
    {
        if(s.empty())
        {
        s.push(element);
        return;
        }

        int num=s.top();
        s.pop();

        //recursive call
        insertAtBottom(s,element);
        s.push(num);
    }*/
    void reverseStack(stack<int>&st)
    {
        //base case
        if(st.empty())
        return;
        //Hold all the items in Function call until we reach at the end point
        int num=st.top();
        st.pop();
        
        //recursive call
        reverseStack(st);

        //Insert all the items held in the Function call stack 
        //one by one from bottom to top
        insertAtBottom(st,num);
}
    
    
    
    
    /*//6.Sortstack
    void sortInsert(stack<int>&st,int num)
    {
        //base case
        if((st.empty()) || (!st.empty() && st.top()<num))
        {
        st.push(num);
        return;
        }
        int n=st.top();
        st.pop();

        //recursive call
        sortInsert(st,num);
        st.push(n);

    }

    void sortStack(stack<int>&st)
    {
        //base case
        if(st.empty())
        return;
        int num=st.top();
        st.pop();

        //recursive call
        sortStack(st);

        sortInsert(st,num);
    }*/




    //7.Redundande Bracket
    bool findRedundanBracket(string &s)
    //create a stack
    stack<char>st;
    for(int i=0; i<s.length(); i++)
    {
        char ch=st.push(s[i]);

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            st.push(ch);
        }
        else//ch closing bracket h
        {
            if(ch==')')
            {
                bool isRedundant=true;
                char top=st.top();
                while(top!='(')
                {
                    st.pop();
                }
            }
        }
    }
    };







/*#include<bits/stdc++.h>
using namespace std;

//Values passed in the function call -> actual parameters 
//Values recived by the function definiton -> formal parameter 

void passByValue(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
   
}
int main()
{
    int a=5,b=6;
    cout<<"Before Swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    passByValue(a,b);
    cout<<"After Swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
void passByReference(int &x,int &y)
{
int z;
z=x;
x=y;
y=z;
}
int main()
{
    int a=5,b=6;
    cout<<"Before Swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    passByReference(a,b);
    cout<<"After Swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}
*/
/*  Pass by address or Pass by Pointer or Call by Pointer
#include<bits/stdc++.h>
using namespace std;
passbyaddress(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=5,b=6;
    cout<<"Before Swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    passbyaddress(&a,&b);  //Address of Variable is pass to parameters of function
    cout<<"After Swapping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
}
*/


/*
1. A Pointer is a variable that holds a memory  address.
2. A Reference has the same memory address as the item it references
3. Reference is the same object, just with a different name 
4. Reference cannot be NULL because it references a certain value while
   pointer can be assigned NULL directly
5. A ponter can be re-assigned  while a reference cannot, and must be assigned at initialization only 
*/







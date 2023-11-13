/*#include<bits/stdc++.h>
using namespace std;

    struct Employee
    {
        char name[50];
        int age;
        double salary;
    };
    int main()
    {
    Employee e1;
    cout<<"Employee DETAILS"<<endl<<"Enter the name"<<endl;
    cin.getline(e1.name,50);
    cout<<"Enter age"<<endl;
    cin>>e1.age;
    cout<<"Enter salary"<<endl;
    cin>>e1.salary;

    cout<<"Employee details are as follows"<<endl;
    cout<<"Employee Name"<<e1.name<<endl;
    cout<<"Employee Age"<<e1.age<<endl;
    cout<<"Employee Salary"<<e1.salary<<endl;
    return 0;
    }*/

    /*Create an array  of structure and accept input and display output 
    structure name -emloye
    datamember-name,age,salary;*/
    #include<bits/stdc++.h>
    using namespace std;
    struct Employe
    {
      string name;
      int age;
      double salary;
    };
   int main()
   {
   Employe e[2];
   cout<<"Enter details like name,age and salary"<<endl;
   for(int i=0;i<2;i++)
   {
    cin>>e[i].name;
    cin>>e[i].age;
    cin>>e[i].salary;
   }
   cout<<"Employe Details"<<endl;
   for(int i=0;i<2;i++)
   {
   cout<<"details of employee"<<i+1<<endl;
   cout<<"name"<<e[i].name<<endl;
   cout<<"age"<<e[i].age<<endl;
   cout<<"salary"<<e[i].salary<<endl;
   }
   }
   /*#include<iostream>
#include<stdio.h>
using namespace std;
/*int main()
{
    int A[5]={2,4,6,8,10};
    for(int x:A)
    {
        cout<<x<<endl;
    
    }
}*/
/*
//definition of strucure//
struct Rectangle
{
  int length;
  int breadth;
};
int main()
{
//declaration of variable
struct Rectangle r={10,5};
cout<<r.length<<endl;
cout<<r.breadth<<endl;
printf("%d",sizeof(r));
*/
//POINTER TO STRUCTURE//
/*#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
  int length;
  int breadth;

};
int maini()
{
struct Rectangle *p;
p=new Rectangle;
p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
p->length=15;
p->breadth=7;
cout<<p->length<<endl;
cout<<p->breadth<<endl;
return 0;
}*/
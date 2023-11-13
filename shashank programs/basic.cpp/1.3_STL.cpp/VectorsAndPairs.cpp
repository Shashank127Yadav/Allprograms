#include<iostream>
#include<array>
#include<vector>
using namespace std;
//PAIRS
/*int main()
{
    pair<int,string> p;
    cin>>p.first;
    cout<<p.first;

    pair<int,string> p;
    p=make_pair(2,"abc");
    p={2,"abcd"};
    pair<int,string> &p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;++i)
    {
        cout << p_array[i].first << "" << p_array[i].second<<endl;
    }
        }
    }*/


   
    //Vectors
    /*void printVec(vector<string> &v)
    {
        cout<<"size " << v.size() << endl;
        for(int i=0;i<v.size();i++)  //v.size()->O(n)
        {
            cout<<v[i] << " ";
        }
        cout<<endl;
    }
    int main()
    {
        vector<string> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        printVec(v);

        //vector<int> v;
        //v.push_back(7);
        //v.push_back(6);
        //printVec(v);
        //v.pop_back();
        //printVec(v); //O(1)
        
        //vector<int> &v2=v;  //O(n)
        //v2.push_back(5);
        //printVec(v);
        //printVec(v2);
    //vector<int> v(5,-2);
    //v.push_back(7);    
    //printVec(v); 
    /*vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x); //O(1)
    }
    printVec(v);
    }*/

//NESTING OF VECTORS
//Vector OF Pairs
/*void printVec(vector<pair<int,int>> &v)
{
    cout<<"size "<< v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<< " " << v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{ 
    //vector<pair<int,int>> v.push_back([nums[i],i])//
    vector<pair<int,int>> v;
    printVec(v);
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    printVec(v);
}*/




/*
//Vectors of Vectors
int main()
{ 
    int N;   //N->No. of Vectors
    cin>>N;
    //v ka every element ek vector hoga 
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        //create a temp vector 
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            //integer x insert in temp
            temp.push_back(x);
        }
        //temp vector insert in v vector
        v.push_back(temp);
    }
}*/




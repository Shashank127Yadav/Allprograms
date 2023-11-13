


#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v={2,3,4,5,6,7};
   for(int i=0;i<v.size();i++)
   {
    cout<< v[i] << " ";
   }
   cout<<endl;
   
   
   vector<int> :: iterator it;
   for(it = v.begin(); it!=v.end(); it++)
   {
      cout<< (*it) << " ";
   }
   cout<<endl;
   
   //using auto, so no need of declaration of (vector<int> :: iterator it) data type
   for(auto it = v.begin(); it!=v.end(); it++)
   {
      cout<< (*it) << " ";
   }
   cout<<endl;

   //RANGE BASED FOR LOOPS
   for(int &value : v)
   {
      cout << value << " ";
   }
   cout<<endl;

   vector<pair<int,int>> v_p={{1,2},{2,3}};
   for(pair<int,int> &value : v_p)
   {
      cout << value.first << value.second<<endl;;
   }
   
   //auto in place of vector<pair<int,int>> v_p
   for(auto &value : v_p)
   {
      cout << value.first << value.second<<endl;
   }


   //AUTO KEYWORD
   //auto dynamically determines the data the type, no need of declaration of data type
   auto a=1.0;
   cout << a << endl;
}
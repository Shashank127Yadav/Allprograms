#include<iostream>
#include<map>
using namespace std;
int main(){
//MAPS STORE PAIRS (KEY,VALUE)
//void print(map<int,string> &m){
cout<<"size "<<m.size()<<endl;
for(auto &pr : m)
{
    cout << pr.first << " "<< pr.second << endl;
}
}
int main(){
map<int,string> m;
m[1]="abc";   //O((logn)) Insertion and cout(remove or access) Operation time complexity, n=size of map
m[5]="cdc";
m[3]="acd";

m.insert({4,"afg"});
m.erase(5);  //O(log(n))
m.clear();
/*auto it = m.find(3);   //O(log(n))
if(it == m.end())
{
    cout<<"No Value";
}
else{
    cout<<(*it).first << " " <<(*it).second <<endl;
}/*

/*map<int,string> :: iterator it;
for(it = m.begin(); it!=m.end(); it++)
{
    cout<<(*it).first << " " << (*it).second << endl;
}
for(auto pr : m)
{
    cout << pr.first << " "<< pr.second << endl;
}*/
//print(m);
}
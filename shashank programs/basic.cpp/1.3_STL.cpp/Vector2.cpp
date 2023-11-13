#include<iostream>
#include<vector>
using namespace std;

int main(){
    //ITERATORS
    vector<int> g1; 
    
    for(int i=1; i<=5; i++)
        g1.push_back(i);

    cout << "Output of begin and end : ";
    for(auto i = g1.begin(); i!=g1.end(); i++)
    cout << *i << " ";

    cout << "\nOutput of cbegin and cend : ";
    for(auto i = g1.cbegin(); i!=g1.cend(); i++)
    cout << *i << " "; 

    cout << "\nOutput of rbegin and rend : ";
    for(auto ir = g1.rbegin(); ir!=g1.rend(); ir++)
    cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for(auto ir = g1.crbegin(); ir!=g1.crend(); ir++)
    cout << *ir << " ";

    vector<int> g2;
    for(int i = 1; i <= 10; i++)
    g2.push_back(i*10);

    cout << "\nReference operator [g] : g2[2] = " << g2[2];
    cout << "\nat : g2.at(4) = " << g2.at(4);
    cout << "\nfront() : g2.front() = " << g2.front();
    cout << "\nback() : g2.back() = " << g2.back(); 

    // pointer to the first element
    int* pos = g2.data();
    cout << "\nThe first element is " << *pos;
}
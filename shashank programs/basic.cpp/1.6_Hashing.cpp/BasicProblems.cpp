#include<bits/stdc++.h>
using namespace std;

/*1. Count Frequency
void countFreq(int arr[], int n)
{
    map<int,int> mpp;
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl; 
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countFreq(arr, n); 
}
*/
//Number Hashing
/*int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //precompute
    int hashh[13] = {0};
    for(int i = 0; i < n; i++)
    {
        hashh[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << hashh[number] << endl; 
    }
     
}*/


//Char Hashing
int main()
{
    string s;
    cin >> s;
    //precompute
    int hashh[26] = {0};
    for(int i = 0; i < s.length(); i++)
    {
        hashh[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        //fetch
        cout << hashh[c - 'a'] << endl;
    }
}
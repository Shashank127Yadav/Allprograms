#include<iostream>
using namespace std;

//Print name N times
void printName(int i, int n)
{
    if(i > n)
    return;
    cout << "XYZ " << endl;
    printName(i+1, n); 
}

//Print 1 to n
void print1(int i, int n)
{
    if(i > n)
    return;
    cout << i << endl;
    print1(i+1, n); 
}

//Print N to 1
void print2(int i, int n)
{
    if(i < 1)
    return;
    cout << i << endl;
    print2(i-1,n); 
}

//Sum of first N Numbers
int sum(int n)
{
    if(n == 0)
    return 0;
    return n + sum(n-1); 
}

//Factorial of N
int fact(int n)
{
    if(n == 0)
    return 1;
    return n * fact(n-1);
}

//Reverse an Array
void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void revArr(int arr[], int n)
{
    int left = 0, right = n - 1;
    while(left < right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    printArr(arr, n);
}

bool pallindrome(int i, string str)
{
    if(i > str.length()/2)
    return true;

    if(str[i] != str.length()-1)
    return false;

    return pallindrome(i+1, str);
}


int main()
{
    string str;
    cin >> str;
    cout << pallindrome(0, str);   
    //int n;
    //cin >> n;
    //int arr[] = {5,4,3,2,1};
    //revArr(arr, n);
    //cout << fact(n);
    //cout << sum(n); 
    //print2(n,n);
    //print1(1,n);
    //printName(1,n);
}
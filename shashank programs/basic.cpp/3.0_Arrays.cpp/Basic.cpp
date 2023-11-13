#include<bits/stdc++.h>
using namespace std;
//1. Largest Element in Array
int largestElement(int arr[], int n)
{
    int largest = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        largest = arr[i];
    }
    return largest;
}

//1. Smallest Element in Array 
int smallestElement(int arr[], int n)
{
    int smallest = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        smallest = arr[i];
    }
    return smallest;
}

// 2.Second Largest in Array
int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            slargest = largest; 
            largest = arr[i];
        }
    }
    return slargest;
} 

//3.Check Array is Sorted or Not
bool isarraySorted(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
    if(arr[i] >= arr[i - 1] )
    {
    }
    else
    return false;
    }
    return true;  
} 

//4.Remove duplilcates
int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for(int j = 1; j < n; j++)
    {
    if(arr[j] != arr[i])
    {
        arr[i+1] = arr[j];
        i++;
    }
    }
    return i+ 1;  
} 

//5.Left Rotate Array by 1
void leftRotate1(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

//6. Left Rotate by d places
void leftRotateD(int arr[], int n, int d)
{
    d = d % n; 
    //store first d elements int temp array
    int temp[d];
    for(int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    
    //shifting left in array
    for(int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }

    //Put back temp to array the d elments
    for(int i = n-d; i < n; i++)
    {
        arr[i] = temp[i -(n-d)];
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

// Left rotate d places by reverse 
void leftRotateD_reverse(int arr[], int n, int d)
{
    if(n == 0) return;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

//7.Move Zeroes in the end 
void moveZeroes(int arr[], int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[j++] = arr[i];
        }
    }
    while(j < n)
    arr[j++] = 0;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

//8. Linear Search
int linearSearch(int arr[], int n, int num)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        return i;
    }
    return -1;    
}//9. Union of two Sorted Arrays
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> Union; 
    set<int> st;
    for(int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for(int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    
    for(auto it : st)
    {
        Union.push_back(it); 
    }
    return Union;
}

//9 Using two pointer
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> Union;
    int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j])
        {
            if(Union.size() == 0 || Union.back() != a[i])
            Union.push_back(a[i]);
            i++;
        } 
        else
        {
            if(Union.size() == 0 || Union.back() != b[j])
            Union.push_back(b[j]);
            j++;
        }
        
        
    }

    while(i < n1)
    {
        if(Union.size() == 0 || Union.back() != a[i])
        Union.push_back(a[i]);
        i++;
    } 
    
    while(j < n2)
    {
        if(Union.size() == 0 || Union.back() != b[j])
        Union.push_back(b[j]);
        j++; 
    }
    return Union;
}


//10.Find Missing Number
int missingNumber(int arr[], int N)
{
    int sum = (N*(N + 1))/2;
    int s2 = 0;
    for(int i = 0; i < N; i++)
    {
        s2 = s2 + arr[i];
    }
    return sum - s2;
}

//11.Maximum consecutive One's
int maxConsecutive1(int arr[], int n)
{
    int count = 0, maxCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        count++;
        else 
        count = 0;
        maxCount = max(maxCount, count);
    }
    return maxCount;
}

//12.Find the number that appears One's and the others are twice  
int appearsOnes(int arr[], int n)
{
    int XOR = 0;
    for(int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}

int main()
{
    int n;
    cin >> n;
    //int num;
    //cin >> num; 
    //int d;
    //cin >> d;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //cout << appearsOnes(arr, n);
    //cout << maxConsecutive1(arr, n);
    /*int N = 5;
    int ans = missingNumber(arr, N);
    cout << ans;*/
    
    /*vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> b = {2, 3, 4, 4, 5, 11, 12};
    vector <int > ans = sortedArray(a, b);
    for(auto &it : ans)
    {
        cout << it << " ";
    }*/     
    //cout << linearSearch(arr, n, num);
    //moveZeroes(arr, n);
    //leftRotateD_reverse(arr, n, d);
    //leftRotateD(arr, n, d);
    //leftRotate1(arr,n);
    /*removeDuplicates(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }*/
    //cout << isarraySorted(arr, n);  
    //cout << secondLargest(arr, n);
    //cout << smallestElement(arr, n);        
    //cout << largestElement(arr, n);
    
    
}
#include<iostream>
using namespace std;

/*//1.Reverse Array

void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i] << " ";
        
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);

    //Function calling
    reverseArray(arr,0,n-1);
    cout<<endl;
    cout<<"Reversed array is"<<endl;
    

    //To print the reversed Array
    printArray(arr,n);

    return 0;
}*/

/*//2.Merge two Sorted Array
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
    void print(int ans[],int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
    }

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
}*/


/*//3.Move zeroes
  void moveZeroes(vector<int>& nms)
  {
    int nonzero=0;
    for(int j=0; j<nums.size(); J++)
    {
        if(nums[j]!=0)
        {
            swap(nums[j],nums[nonzero]);
            i++;
        }
    }
  }*/

  //4.Rotate Array
  //concept [(i+k)%n]=num[i]



/*//5.Add two arrays
int main()
{
    int n1,n2;
    cin>>n1;

    int* a1 = new int[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    int* a2 = new int(n2);
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }

    int m = max(n1,n2);
    int* ans = new int[m];
    
    int i=n1-1;
    int j=n2-1;
    int k=m-1;
    int carry=0;

    while(k>=0)
    {
        int sum = carry;
        if(i>=0)
        sum = sum + a1[i];
        if(j>=0)
        {
            sum =sum + a2[i];
        }
        int q = sum/10;
        int r = sum%10;

        ans[k] =  r;
        carry = q;
        i--;
        j--;
        k--;
    }
    if(carry!=0)
    cout<<carry<<endl;

    for(int i=0; i<m; i++)
    {
        cout<<ans[i]<<endl;
    }
}*/

/*//6.Length of String //7.Revese a String

void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        int temp=name[s];
        name[s]=name[e];
        name[e]=temp;
    }
}

int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i]!=0; i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char name[20];

    cout<<"Enter Your Name"<<endl;
    cin>>name;

    cout<<"Your Name is:";
    cout<<name<<endl;
    
    int Len=getLength(name);
    cout<<"Length:"<<Len<<endl;

    reverse(name,Len);
    cout<<"Your Name is:"<<endl;
    cout<<name<<endl;
    return 0;
}*/
/*Sum of all subarrays
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
            cout<<sum<<endl;
        }
}
return sum;
}*
   
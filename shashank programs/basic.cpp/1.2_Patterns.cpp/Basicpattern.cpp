#include<iostream>
using namespace std;

void print1(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "* ";  
        }
        cout << endl;
    }
}

void print2(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        } 
        cout << endl;
    }
}

void print3(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << j << " " ;
        }
        cout << endl;
    }
}

void print4(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
} 

void print5(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print6(int n)
{
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print7(int n)
{
    for(int i = 0; i < n; i++)
    {
    //space
    for(int j = 0; j < n-i-1; j++)
    {
        cout << " ";
    }
    //star
    for(int j = 0; j<2*i+1; j++)
    {
        cout << "*";
    }
    //space
    for(int j = 0; j < n-i-1; j++)
    {
        cout << " ";
    }
    cout << endl;
    }
}

void print8(int n)
{
    for(int i = 0; i < n; i++)
    {
        //space
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        //star
        for(int j = 0 ; j < 2*n-2*i-1; j++)
        {
            cout << "*";
        }
        //space
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print10(int n)
{
    for(int i = 1; i <= 2*n-1; i++)
    {
        int star = i;
        if(i > n)
        star = 2*n-i;
        for(int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print11(int n)
{
    int start = 1;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        start = 1;
        else 
        start = 0;
        for(int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void print12(int n)
{
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++)
    {
        //number
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        } 
        //space
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        //number
        for(int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space -2;
    }
}

void print13(int n)
{
    int num = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void  print14(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char ch = 'A'; ch < 'A'+ n-i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print16(int n)
{
    char ch = 'A';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << ch << " ";  
        }
        cout << endl;
        ch++; 
    }
}

int main()
{
    int n;
    cin >> n;
    print16(n);
    //print15(n);
    //print14(n);
    //print13(n);
    //print12(n);
    //print11(n);
    //print10(n);
    //print7(n); //9 is combinaion of 7 & 8 
    //print8(n);
    //print8(n);
    //print7(n);
    //print6(n);
    //print5(n);
    //print4(n);
    //print3(n);
    //print2(n);  
    //print1(n);
    return 0;
}

//A2Z striver dsa sheet
/*Pattern1: https://bit.ly/3QfK2k3
Pattern2: https://bit.ly/3VADLAt
Pattern3: https://bit.ly/3CiWV74
Pattern4: https://bit.ly/3Gzv70S
Pattern5: https://bit.ly/3WXGSDD
Pattern6: https://bit.ly/3i06XDu
Pattern7: https://bit.ly/3GzvAAa
Pattern8: https://bit.ly/3IqmG9k
Pattern9: https://bit.ly/3GyUIHp      
Pattern10: https://bit.ly/3WZoytT
Pattern11: https://bit.ly/3WLiUvW  
Pattern12: https://bit.ly/3jDVVnD
Pattern13: https://bit.ly/3WWQ1wb
Pattern14: https://bit.ly/3GyWCYs
Pattern15: https://bit.ly/3X1i8KC
Pattern16: https://bit.ly/3G9gq3g
Pattern17: https://bit.ly/3jJ7CcR
Pattern18: https://bit.ly/3Z3scot
Pattern19: https://bit.ly/3QfKij1
Pattern20: https://bit.ly/3G2eCZC
Pattern21: https://bit.ly/3vBpdpy
Pattern22: https://bit.ly/3vtRNJJ*/
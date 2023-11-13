#include<iostream>
using namespace std;

// GCD/HCF
/*int main()
{
    int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0)
    {
        if(a > b) 
        a = a % b;
        else
        b = b % a;
    }
    if(a == 0) cout << "GCD = b";
    else cout << "GCD = a";
}*/


//Check Prime Number ->exacly two factors 1 and itself
/*int main()
{
    int n,cnt=0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        cnt++;
    }
    if(cnt == 2)
    cout << "True";
    else
    cout << "False";
}*/


//Print all divisors
/*int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        cout << i << " ";
    }
}*/
    
//ArmMstrong Number 371 -> 3^3 + 7^3 + 1^3 = 371, 1634 -> 1^3 + 6^3+ 3^3 + 4^3 = 1634 
/*void isArmstrongNo(int n)
{
    int sum = 0;
    int store = n;
    while(n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        sum = sum + (ld * ld * ld);
    }
    if(sum == store)
    cout << "True";
    else 
    cout << "False";
}

int main()
{
    int n;
    cin >> n;
    isArmstrongNo(n); 
}*/


//Check Number is pallindrome 1221, 5555, 11, 525, 6556
/*void checkPallindrome(int n)
{
    int revNum = 0;
    int store = n;
    while(n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if(revNum == store) 
    cout << "True";
    else
    cout << "False";
}
int main()
{
    int n;
    cin >> n;
    checkPallindrome(n);
}*/


//Reverse Number
/*void reverseNum(int n)
{
    int revNum = 0;
    while(n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    cout << revNum;
}

int main()
{
    int n;
    cin >> n;
    reverseNum(n);
}*/

//Count Digit
/*void countDigit(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        cnt++;
    }
    cout << cnt; 
} 

int main()
{
    int n;
    cin >> n;
    countDigit(n);
}*/

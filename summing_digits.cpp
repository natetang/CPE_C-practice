#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
using namespace std;
int f(int n)
{
    if(n<=9)return n;
    else
    {
        int temp=0;
        while(n)
        {
            temp+= n%10;
            n/=10;
        }
        n = temp;
        return f(n);
    }
}
int main()
{
    int n;

    while(cin >> n && n)
    {
        cout << f(n)<<endl;
    }
}

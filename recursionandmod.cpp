#include <stdio.h>
#include <stdlib.h>
long long cal(int a,long long n,long long b)
{
    if(n==1)return 3;
    else
    {
        long long result=cal(a,n/2,b);
        if(n%2==1)
        {
            return ((result*result*3))%b;
        }
        else
        {
            return ((result*result))%b;
        }
    }
}
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        n=cal(3,n,1000000009);
        printf("%lld\n",n-2);
    }
}

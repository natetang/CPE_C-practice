#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,temp;

    while(scanf("%lld %lld",&a,&b) && (a!=0 || b!=0))
    {
        temp=0;
        int count=0;
        while(a||b)
        {
            temp=a%10 + b%10 +temp;
            temp/=10;
            if(temp>0) count++;
            a/=10,b/=10;
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",count);
        }
    }
    return 0;
}

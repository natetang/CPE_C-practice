#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long m,n=0;
    long long t;
    long long j;
    long long k;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
       long long max=0;
       if(m>n) j=n,k=m;
       else j=m,k=n;
        for(int i=j; i<=k; i++)
        {
            t=i;
          long long count=1;
            while(t!=1)
            {
                if((t%2)==0)
                {
                    t/=2;
                    count+=1;
                }
                else
                {
                    t=(3*t)+1;
                    count+=1;
                }

            }
            if(count>max) max=count;
        }
        printf("%lld %lld %lld\n",m,n,max);
    }
    return 0;
}

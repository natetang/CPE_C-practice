#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int ans=0;
        while(x)
        {
            int tmp=ans*10 +x%10;
            if(tmp/10!=ans)
            {
                ans=0;
                break;
            }
            ans = tmp;
            x/=10;
            cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}

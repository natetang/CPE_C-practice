#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#include <string>
int main()
{
    string input;
    int totalcase=1;
    while(cin>>input)
    {
        int testcase=0;
        cin >> testcase;
        int i,j;

        cout<<"Case "<<totalcase<<":"<<endl;
        while(testcase--)
        {
            cin >> i>>j;
            int low,high;
            if(i==j)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                if(i>j) low=j,high=i;
                else low=i,high=j;
                int flag=false;
                for(low; low<=high; low++)
                {
                    if(input[low]==input[low+1])
                    {
                        //cout<<"input[low]="<<input[low]<<" input[low+1]="<<input[low+1]<<endl;
                        if(low+1==high)
                        {
                            cout<<"Yes"<<endl;
                            flag=true;
                        }
                    }
                    else break;
                    // cout<<low<<" "<<high<<endl;
                }
                if(flag==false)
                {
                    cout<<"No"<<endl;
                }
            }
        }

        totalcase++;
    }
    return 0;
}

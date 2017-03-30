#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    string  str[2005];
    while(scanf("%d",&num)!=EOF)
    {
        //string  str[2005];
        string name;
        for(int i=0; i<num; i++)
        {
            cin >> str[i];
            getline(cin, name);
        }
        sort(str,str+num);
        for(int i=0; i<num; )
        {
            //cout << i;
            cout << str[i];
            int count =1;
            int j;
            for( j=i+1; j<num; j++)
            {
                if(str[i]==str[j])
                {
                    count++;
                }
                else
                    break;
            }
            printf(" %d\n",count);
           i=j;
        }
    }
    return 0;
}

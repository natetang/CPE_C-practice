#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    char text[1005];
    int left=1,right=0;
    while( gets(text))
    {
        int i=0;
        while(text[i])
        {
            if(text[i]!='"')
            {
                cout << text[i];
            }
            else if(text[i]=='"'&&left==1)
            {
                cout <<"``";
                left=0;
                right=1;
            }
            else if(text[i]=='"'&&right==1)
            {
                cout << "''";
                left=1;
                right=0;
            }
            i++;
        }
        cout << endl;
    }
}

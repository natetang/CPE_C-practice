#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char text[1005];
    char text2[1005];

    while (gets(text)&&gets(text2))
    {
        sort(text,text+strlen(text));
        sort(text2,text2+strlen(text2));
        int i=0,j=0;
        while(text[i] && text2[j])
        {
            if(text[i] == text2[j])
            {
                cout << text[i];
                i++;
                j++;
            }
            else if(text[i] < text2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        cout << endl ;
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char text[105][105];
    int count=0;
    int len[105];
    int largest=0;
    while(gets(text[count]))
    {
        len[count] = strlen(text[count]);
        if(len[count]>largest)largest=len[count];
        for(int a = len[count];a<largest;a++)
        {
            text[count][a]=' ';
            len[count]++;
        }
        count++;
    }
    for(int i=0;i<largest;i++)
    {
        for(int j=count-1;j>=0;j--)
        {
            if(i<len[j])
                cout << text[j][i];
        }
        cout << endl ;
    }
    return 0;
}



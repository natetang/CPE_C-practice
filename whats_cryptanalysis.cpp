#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int line, count[26]= {0}, max;
    char text[1000];
    while(scanf("%d",&line)  != EOF)
    {
         getchar();
        while(line>0)
        {
            char text[1000];
            gets(text);
            for(int i=0; i<strlen(text); i++)
            {
                if(text[i] >= 'a' && text[i]<= 'z')
                {
                    count[text[i]-'a']++;
                    if(count[text[i]-'a'] > max) max=count[text[i]-'a'];
                }
                if(text[i] >= 'A' && text[i]<='Z')
                {
                    count[text[i]-'A']++;
                    if(count[text[i]-'A'] > max) max=count[text[i]-'A'];
                }
            }
            line--;
        }
        for(int i=max; i>0; i--)
        {
            for(int j=0; j<26; j++)
            {
                if(count[j]==i)
                    printf("%c %d\n",j+'A',i);
            }
        }

    }
    return 0;
}

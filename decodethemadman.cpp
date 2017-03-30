#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char text[1000];
    char board[]={"1234567890-=qwertyuiop[]asdfghjkl;'\zxcvbnm,./"};
    gets(text);
    for(int i=0;i<strlen(text);i++)
    {
        text[i]=tolower( text[i] );

        for(int j=0;j<strlen(board);j++)
        {
            if(text[i]!= NULL )
            {
                if(text[i]==' ')break;
                if(text[i]==board[j])
                {
                    text[i]=board[j-2];
                    break;
                }
            }
            else
            {
                break;
            }
        }
        putchar(text[i]);
    }
    cout << endl ;
    return 0;
}

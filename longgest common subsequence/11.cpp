#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[1005], s2[1005];
    while( gets(s1) )
    {
        gets(s2);
        //memset( LCS, 0, sizeof(LCS) );
        int s1_length = strlen(s1);
        int s2_length = strlen(s2);
        int i, j;
        int **LCS;
        LCS = new int*[s1_length+1];
        for(i = 0; i < s1_length+1; i++)
            LCS[i] = new int[s2_length+1];
        for(i = 0;i<=s1_length;i++)
        {
            for(j=0;j<=s2_length;j++)
            {
                LCS[i][j]=0;
            }
        }

        for( i = 1 ; i <= s1_length ; i++ )
            for( j = 1 ; j <= s2_length ; j++ )
                if( s1[i-1] == s2[j-1] )
                    LCS[i][j] = LCS[i-1][j-1]+1;
                else
                    LCS[i][j] = ( LCS[i-1][j] > LCS[i][j-1] )? LCS[i-1][j] : LCS[i][j-1];
        printf( "%d\n", LCS[s1_length][s2_length] );
        for(i = 0; i < s1_length+1; i++)
            delete [] LCS[i];
        delete [] LCS;

    }
    return 0;
}



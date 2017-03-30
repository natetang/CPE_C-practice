/* 1000digits too big so use char to store*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char input[1001];
    while(cin >> input && strcmp(input,"0"))//strcmp :equal return 0
    {
        int sumOdd=0,sumEven=0,i=0,sum;
        while(input[i])
        {
            if(i%2)
            {
                sumOdd += (input[i] -'0'); // make char to int
            }
            else
            {
                sumEven += (input[i] - '0');
            }
            i++;
        }
        sum = abs(sumOdd-sumEven);
        if(sum%11)
        {
            printf("%s",input);
            printf(" is not a multiple of 11.\n");
        }
        else
        {
            printf("%s",input);
            printf(" is a multiple of 11.\n");
        }

    }
}

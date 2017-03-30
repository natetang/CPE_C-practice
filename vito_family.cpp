#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num=0;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        int relative[505];
        int count;
        int answer=0;
        cin >> count;
        for(int j=0;j<count;j++)
        {
            cin >> relative[j];
        }
        sort(relative,relative+count);
        int pivot=relative[count/2];//set as house
        for(int j=0;j<count;j++)
        {
            answer+= abs(pivot-relative[j]); // abs -- µ´¹ï­È
        }
         printf("%d\n",answer);
    }
    return 0;
}

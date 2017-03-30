#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long hashmat;
    long long opponent;

    while(scanf("%lld %lld",&hashmat,&opponent) !=EOF)
    {

        long long answer= abs(hashmat-opponent);

        cout << answer <<endl;
    }
}

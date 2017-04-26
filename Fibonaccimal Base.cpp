#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int Fib[40];
    Fib[0]=0,Fib[1]=1;
    for(int i=2;i<40;i++)
    {
        Fib[i]=Fib[i-1]+Fib[i-2];

    }
   int count;
   cin >> count;
   for(int i=0;i<count;i++)
   {
       int target;
       int flag=0;
       int answer;
       int j=39;
       cin >> target;
       cout << target <<" = ";
       while(j !=1)
       {
           if(target/Fib[j]==1)
           {
               cout <<"1";
               target %= Fib[j];
               flag=1;
           }
           else if(flag==1)
           {
               cout <<"0";
           }
           j--;
       }
       cout << " (fib)"<<endl;
   }
   return 0;
}

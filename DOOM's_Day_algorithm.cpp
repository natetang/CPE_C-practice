#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   string month_name[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
   int round;
   cin >> round;
   while(round--)
   {
       int date=6;// 1/1 saturday
       int m,d;
       int temp=0; // for count
       cin >> m >>d;
       for(int i=0;i<m-1;i++)
       {
           temp+=month[i];
       }
       temp+=d-1;// interval ,not how many days
       if(temp>= 7)
       {
           temp %= 7;
       }
       date+=temp;
       if(date >7)
       {
           date -=7;
       }
       cout << month_name[date-1]<<endl;
   }
   return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
   string str;
   while(getline(cin,str))
   {
       int sum=0;
       int max=2;
       for(int i=0;i<str.size();i++)
       {
           int num=0;
           if(isdigit(str[i])) num=str[i]-48;
           else if(isupper(str[i])) num=str[i]-55;
           else if(islower(str[i])) num=str[i]-61;
           sum+=num;
           if(num>max)max=num; // 這個數字是3代表一定超過3進位
       }
       for(int i=max;i<63;i++)
       {
           if(sum%i==0)
           {
               cout <<i+1<<endl;
               break;
           }
           else if (i==62)cout <<"such number is impossible!"<<endl;
       }
   }
   return 0;
}

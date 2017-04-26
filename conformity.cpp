#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int num_people;
    int course[5];
    char tmp[50];
    while(scanf("%d",&num_people) && num_people !=0)
    {
        string str;
        map<string, int>record;
        while(num_people--)
        {
            scanf("%d%d%d%d%d",&course[0],&course[1],&course[2],&course[3],&course[4]);
            sort(course,course+5);
            sprintf(tmp,"%d%d%d%d%d",course[0],course[1],course[2],course[3],course[4]);
            str = tmp;
            record[str]++;
        }
        int max=0,maxnum=0;
        map<string,int>::iterator iter;
        for(iter=record.begin();iter!=record.end();iter++)
        {
            if(iter->second >max)
            {
                max=iter->second;
                maxnum=max;
            }
            else if(iter->second ==max)
            {
                maxnum += max;
            }
        }
        cout<<maxnum<<endl;
    }
}

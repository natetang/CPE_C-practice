#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    string str;
    map<string,int> index_money;
    int total=0;
    int money;
    for(int i=0; i<m; i++)
    {
        cin >> str >> money;
        index_money[str]=money; //�]�w����r��������
    }
    for(int j=0;j<n;j++)
    {
        while(cin >> str && str!=".")
        {
            if(index_money[str]>0)//�Y�S�������h�^�ǭt��
            {
                total+=index_money[str];
            }
        }
        printf("%d\n",total);
        total=0;
    }

}

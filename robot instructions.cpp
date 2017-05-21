#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	int testcase=0;
	cin >> testcase;
	while(testcase--)
	{
		int loop=0;
		cin>>loop;
		int arr[loop+5];
		char string[40];
		int sum=0;
		for(int i=1;i<=loop;i++)
		{
			 cin >> string;
			if(string[0]=='L')
			{
				arr[i]=-1;
				sum+=arr[i];
			}
			else if(string[0]=='R')
			{
				arr[i]=1;
				sum+=arr[i];
			}
			else 
			{
				int tmp;
				char tmp2[10];
				scanf("%s %d",tmp2,&tmp);
				arr[i]=arr[tmp];
				sum+=arr[tmp];
			}
		}
		cout << sum<<endl;
	}
	return 0;
}
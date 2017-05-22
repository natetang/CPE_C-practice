#include <iostream>
#include <stdio.h>
using namespace std;
int prime[3401]={2}; //10e 以下總共有 3401 個 質數 
int main(int argc, char *argv[]) {
	    //int a[4000000]; //最大到40000 篩選用
		int prime_num=1;
		/* 開始篩選 */
		for(int i=3; i*i <= 1000000000; i+=2) // 要檢查10e以下有幾個質數 只要檢查到他的開根號
		{
			int judge=1;
			for(int j=2; j*j <=i ; j++) // 判斷這個數是不是質數 只要檢查到他的開根號
			{
				if(i%j == 0)    
				{
					judge = 0;
				}
			}
			if(judge)   
			{
				prime[prime_num++] = i;
			}
		}
		//cout <<prime_num<<endl; 可以算出有幾個質數
		int input;
		while(cin >> input)
		{
			int Ans = input;
			if(input)
			{
				for(int i=0; i < prime_num && input >= prime[i] ; i++)
				{
					if(input % prime[i]==0)
					{
						while(input % prime[i] ==0)
						{
							input /= prime[i];
						}
						Ans /= prime[i];
						Ans *= (prime[i]-1);
					}
				}
				if(input !=1)
				{
					Ans /= input;
					Ans *= (input-1);
				}
				
			}
			else
			{
				break;
			}
			cout<<Ans<<endl;
		}
		return 0;
}
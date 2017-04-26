#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <iostream>
#include <string.h>
using namespace std;
int evaluate(stack<int>&s,char op)
{
    if(s.empty())return 0;
    int top1 = s.top();
    s.pop();
    if(s.empty())
        return 0;
    int top2 = s.top();
    s.pop();
    int result=0;
    switch(op){
        case '+':
            result=top1 + top2;
            break;
        case '-':
            result=top1 - top2;
            break;
        case '*':
            result=top1 * top2;
            break;
        case '/':
            result=top1 / top2;
            break;
        case '%':
            result=top1 % top2;
            break;
    }
    s.push(result);
    return 1;
}
int main()
{
    string input;
    while(getline(cin,input) && input[0]!='.')
    {

        stack <int>s;
        //int result=0;
        int operand =0;
        int flag=0;
        for(int i=input.size()-1; i>=0; i--)
        {
            if(flag)break;
            switch(input[i])
            {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
                if(!evaluate(s,input[i]))
                {
                    cout<<"illegal"<<endl;
                    flag =1;
                    break;
                }
            case ' ':
                break;
            default:
                int pow=1;
                while(input[i]>='0' && input[i]<='9')
                {
                    operand = operand + (input[i]-'0')*pow;
                    pow*=10;
                    i--;
                }
                s.push(operand);
                operand=0;
                break;
            }
        }
        if(!flag)
        {
            cout<<s.top()<<endl;
        }
    }
    return 0;
}

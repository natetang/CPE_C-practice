#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> twosum(vector<int>& nums,int target)
{
    map<int,int> hashTable;
    map<int,int>::iterator iter;
    vector<int> ansIndex(2);

    for(int i = 0; i < nums.size(); i++)
    {
        int x = nums[i];
        iter = hashTable.find(target - x);

        if(iter != hashTable.end())
        {
            ansIndex[0] = iter->second + 1;
            ansIndex[1] = i + 1;
            return ansIndex;
        }
        else
            hashTable[x] = i;
    }

    cout<<"no answer.."<<endl;
}



#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  string input;
  int x[250]={0};
  int y[250]={0};
  while(getline(cin,input))
  {
      int xlen=input.length();
      for(int i=0;i<xlen;i++)
      {
          x[i]=input[xlen-i-1]-'0';
      }
      getline(cin,input);
      int ylen=input.length();
      for(int i=0;i<ylen;i++)
      {
          y[i]=input[ylen-i-1]-'0';
      }
      int anslen=xlen+ylen;
      int ans[500]={0};
      for(int i=0;i<xlen;i++)
      {
          for(int j=0;j<ylen;j++)
          {
              ans[i+j]+=x[i] * y[j];
              ans[i+j+1]+=ans[i+j]/10;
              ans[i+j]%=10;
          }
      }
      int j=0;
      while(anslen>1 && ans[anslen-1]==0)
      {
          anslen--;
          j++;
      }
      //cout<<anslen<<endl;
      for(int i=0;i<anslen;i++)
      {
          cout<<ans[anslen-1-i];
      }
      cout<<endl;

  }
  return 0;
}

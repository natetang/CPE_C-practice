#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void visit(char map[][105],int i,int j)
{
    if(map[i][j]=='@')
    {
        map[i][j]='*';
        visit(map,i,j+1); //right
        visit(map,i,j-1);//left
        visit(map,i+1,j);//down
        visit(map,i-1,j);//up
        visit(map,i+1,j+1);//right-down
        visit(map,i+1,j-1);//left-down
        visit(map,i-1,j+1);//right-up
        visit(map,i-1,j-1);//left-up
    }
}
int main(int argc, const char * argv[]) {
    int m,n;
    while(scanf("%d%d",&m,&n) && (m||n))
    {
        char map[105][105]={0};
        bool grid[105][105]={0};
        //memset(map, '0', sizeof(map));
        //memset(grid,0,sizeof(grid));
        int oilcount=0;
        getchar();
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin >>map[i][j];
            }
            getchar();
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(map[i][j]=='@')
                {
                    oilcount++;
                    visit(map,i,j);
                   //cout<<i<<"  "<<j<<endl;
                }
            }
        }
        cout<<oilcount<<endl;
    }
return 0;
}

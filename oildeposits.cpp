//
//  main.cpp
//  oildeposits.cpp
//
//  Created by tang on 2017/3/31.
//  Copyright © 2017年 tang. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void visit(char map[][105],bool grid[][105],int i,int j)
{
    if(map[i][j]=='@' && grid[i][j]==false)
    {
        grid[i][j]=1;
        visit(map,grid,i,j+1); //right
        visit(map,grid,i,j-1);//left
        visit(map,grid,i+1,j);//down
        visit(map,grid,i-1,j);//up
        visit(map,grid,i+1,j+1);//right-down
        visit(map,grid,i+1,j-1);//left-down
        visit(map,grid,i-1,j+1);//right-up
        visit(map,grid,i-1,j-1);//left-up
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
            for(int j=1;j<=m;j++)
            {
                if(map[i][j]=='@' && !grid[i][j])
                {
                    oilcount++;
                    visit(map,grid,i,j);
                }
            }
        }
        cout<<oilcount<<endl;
    }
return 0;
}
/*
#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_MAP_LIMIT = 100;

void visit(bool isVisited[][MAX_MAP_LIMIT+5],
           char map[][MAX_MAP_LIMIT+5],
           int i, int j ){
    if( map[i][j] == '@' && !isVisited[i][j] ){
        isVisited[i][j] = true;
        visit( isVisited, map, i-1, j );
        visit( isVisited, map, i+1, j );
        visit( isVisited, map, i, j+1 );
        visit( isVisited, map, i, j-1 );
        visit( isVisited, map, i+1, j-1 );
        visit( isVisited, map, i+1, j+1 );
        visit( isVisited, map, i-1, j-1 );
        visit( isVisited, map, i-1, j+1 );
    }

}

int main(){
    int m, n;
    while( scanf("%d%d", &m, &n) != EOF && m > 0 ){
        char map[MAX_MAP_LIMIT+5][MAX_MAP_LIMIT+5] = {0};
        gets(map[0]); // for '\n'
        for( int i = 1 ; i <= m ; ++i ){
            gets(map[i]+1);
        }

        bool isVisited[MAX_MAP_LIMIT+5][MAX_MAP_LIMIT+5] = {0};
        int oilCount = 0;
        for( int i = 1 ; i <= m ; ++i ){
            for( int j = 1 ; j <= n ; ++j ){
                if( map[i][j] == '@' && !isVisited[i][j] ){
                    ++oilCount;
                    visit( isVisited, map, i, j );
                }
            }
        }

        printf("%d\n", oilCount);
    }
    return 0;
}
*/

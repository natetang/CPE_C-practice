#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;

    int t=1;
    char square;
    while(scanf("%d%d",&n,&m)!=EOF && !(n==0 && m==0))
    {
        getchar();
        if(t!=1) printf("\n");
        int str[105][105]={0};

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                square=getchar();
                if(square=='*')
                {
                    str[i][j]=-100;
                    for(int l=-1; l<2; l++)
                    {
                        for(int k=-1; k<2; k++)
                        {
                            str[i+l][j+k]++;
                        }
                    }
                }
            }
            getchar();
        }
        printf("Field #%d:\n",t);
        t++;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(str[i][j]<0)
                {
                    printf("*");
                }
                else
                {
                    printf("%d",str[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

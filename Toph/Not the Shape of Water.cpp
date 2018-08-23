#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int r,c,i,j,x,y,l=0,b=0;
        cin>>r>>c;
        getchar();
        bool chk=false;
        char ara[r+1][c+1];
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                cin>>ara[i][j];
                if(!chk && ara[i][j]=='#')
                {
                    x=i;y=j;
                    chk=true;
                }
            }
        }
        for (i=x,j=y;j<c;j++)
        {
            if (ara[i][j]!='#')
                break;
            l++;
        }
        for (i=x,j=y;i<r;i++)
        {
            if(ara[i][j]!='#')
                break;
            b++;
        }
        (l==b)?puts("Square"):puts("Rectangle");
    }
}

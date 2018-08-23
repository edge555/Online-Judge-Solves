#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
bool vis[555][555];
char ara[555][555];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int row,col,k;
void dfs(int a,int b)
{
    if(a<0 || a>=row || b<0 || b>=col|| vis[a][b]==true ||ara[a][b]!='.')
        return;
    vis[a][b]=true;
    for (int i=0;i<4;i++)
        dfs(a+dx[i],b+dy[i]);

    if(k!=0)
    {
        ara[a][b]='X';
        k--;
    }
}
int main()
{
    cin>>row>>col>>k;
    getchar();
    int i,j;
    for (i=0;i<row;i++)
        cin>>ara[i];
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            if(ara[i][j]=='.' && k!=0)
                dfs(i,j);
        }
    }
    for (i=0;i<row;i++)
        cout<<ara[i]<<endl;

}

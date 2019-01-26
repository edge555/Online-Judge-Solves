
#include <bits/stdc++.h>

#define pii pair<int,int>
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
bool vis[10][10];
int mv[10][10];
int dx[]={1, -1, 1, -1, 2, 2, -2, -2};
int dy[]={2, 2, -2, -2, 1, -1, 1, -1};
string s1,s2;

void bfs(int a,int b,int c,int d)
{
    queue<pair<int,int>>q;
    memset(vis,false,sizeof(vis));
    q.push(make_pair(a,b));
    vis[a][b]=true;
    mv[a][b]=0;
    while (!q.empty())
    {
        int xx,yy,i;
        pair<int,int>top=q.front();
        q.pop();
        if(top.first==c && top.second==d){
            cout<<mv[top.first][top.second]<<endl;
            return;
        }
        for (i=0;i<8;i++)
        {
            xx=top.first+dx[i];
            yy=top.second+dy[i];

            if((xx>0 && xx<=8) && (yy>0 && yy<=8) && vis[xx][yy]==false)
            {
                vis[xx][yy]=true;
                mv[xx][yy]=mv[top.first][top.second]+1;
                q.push(make_pair(xx,yy));
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2;
        int a,b,c,d;
        a=s1[0]-96;
        b=s1[1]-'0';
        c=s2[0]-96;
        d=s2[1]-'0';
        bfs(a,b,c,d);
    }
}

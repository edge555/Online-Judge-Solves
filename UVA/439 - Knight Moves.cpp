#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={1,-1,1,-1,2,2,-2,-2};
int dy[]={2,2,-2,-2,1,-1,1,-1};
int i,p,q,pp,qq;
string a,b;
int grid[10][10];
bool vis[10][10];
bool valid(int x,int y)
{
    if(x>=0 && x<8 && y>=0 && y<8 && !vis[x][y])
        return true;
    return false;
}
void bfs(int aa,int bb)
{
    queue<pi>qqq;
    qqq.push(mpp(aa,bb));
    vis[aa][bb]=true;
    grid[aa][bb]=0;
    while(!qqq.empty())
    {
        pi top=qqq.front();
        qqq.pop();
        int x=top.fi,y=top.se,xx,yy;
        rep0(i,8)
        {
            xx=x+dx[i];yy=y+dy[i];
            if(valid(xx,yy))
            {
                vis[xx][yy]=true;
                grid[xx][yy]=grid[x][y]+1;
                if(xx==pp && yy==qq)
                {
                    cout<<"To get from "<<a<<" to "<<b<<" takes "<<grid[pp][qq]<<" knight moves.\n";
                    return;
                }
                qqq.push(mpp(xx,yy));
            }
        }
    }
}
int main()
{

    while(cin>>a>>b)
    {
        if(a==b)
        {
            cout<<"To get from "<<a<<" to "<<b<<" takes 0 knight moves.\n";
            continue;
        }
        p=a[0]-'a';q=a[1]-'0'-1;
        pp=b[0]-'a';qq=b[1]-'0'-1;
        mem(grid);
        memb(vis);
        bfs(p,q);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

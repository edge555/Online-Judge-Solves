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
#define N 1005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool vis[N][N];
int cost[N][N];
int p,q,pp,qq;
int n,m,k;
string a[N];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]=='.')
        return true;
    return false;
}
void bfs()
{
    int i,j;
    vis[p][q]=true;
    cost[p][q]=0;
    queue<pi>qqq;
    qqq.push(make_pair(p,q));
    while(!qqq.empty())
    {
        pi pr=qqq.front();
        int x=pr.fi,y=pr.se;
        if(x==pp && y==qq)
        {
            pf("%d",cost[pp][qq]);
            return;
        }
        qqq.pop();
        rep0(i,4)
        {
            rep(j,k)
            {
                int xx=x+dx[i]*j;
                int yy=y+dy[i]*j;
                if(!valid(xx,yy))
                    break;
                if(!vis[xx][yy])
                {
                    vis[xx][yy]=true;
                    cost[xx][yy]=cost[x][y]+1;
                    if(xx==pp && yy==qq)
                    {
                        pf("%d",cost[pp][qq]);
                        return;
                    }
                    qqq.push(mpp(xx,yy));
                }
            }
        }
    }
    pf("-1");
}
int main()
{
    sfff(n,m,k);
    int i;
    rep0(i,n)
        cin>>a[i];
    sff(p,q);
    sff(pp,qq);
    if(p==pp && q==qq)
    {
        pf("0");
        return 0;
    }
    p--;q--;pp--;qq--;
    bfs();

    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

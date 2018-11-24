#include <bits/stdc++.h>

#define FAST ios_base::sy1c_with_stdio(false); cin.tie(NULL)
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
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<int,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int cost[1001][1001];
bool vis[1001][1001];
string a[1001];
priority_queue<pii>pq;
int i,n,m,cst;
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && a[x][y]=='.')
        return true;
    return false;
}
void bfs(int x,int y)
{
    vis[x][y]=true;
    cost[x][y]=0;
    queue<pi>q;
    q.push(mpp(x,y));
    while(!q.empty())
    {
        pi pr=q.front();
        q.pop();
        rep0(i,4)
        {
            int xx=pr.fi+dx[i];
            int yy=pr.se+dy[i];
            if(valid(xx,yy))
            {
                cost[xx][yy]=cost[pr.fi][pr.se]+1;
                if(cst<cost[xx][yy])
                {
                    cst=cost[xx][yy];
                    pq.push(mpp(cst,mpp(xx,yy)));
                }
                vis[xx][yy]=true;
                q.push(mpp(xx,yy));
            }
        }
    }
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sff(m,n);
        getchar();
        int j,k,x,y;
        bool chk=false;
        rep0(i,n)
        {
            getline(cin,a[i]);
            rep0(j,m)
            {
                if(a[i][j]=='.' && !chk)
                {
                    x=i;
                    y=j;
                    chk=true;
                }
            }
        }
        cst=-1;
        memb(vis);
        mem(cost);
        bfs(x,y);
        cst=-1;
        mem(cost);
        memb(vis);
        if(pq.empty())
        {
            pf("Maximum rope length is 0.\n",cst);
            continue;
        }
        pii pr=pq.top();
        int aa=pr.se.fi,bb=pr.se.se;
        bfs(aa,bb);
        if(cst==-1)
            cst=0;
        pf("Maximum rope length is %d.\n",cst);
        while(!pq.empty())
            pq.pop();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

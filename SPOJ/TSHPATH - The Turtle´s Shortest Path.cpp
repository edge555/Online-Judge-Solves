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
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int i,n,st,en;
vector<pi>grid[10001];
int dis[10001];
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setvalue()
{
    rep(i,n)
    {
        grid[i].clear();
        dis[i]=1e9;
    }
}
void resetvalue()
{
    rep(i,n)
        dis[i]=1e9;
}
void dijkstra(int src)
{
    dis[src]=0;
    pq.push(mpp(0,src));
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        int u=p.se,w=p.fi;
        if(w>dis[u])
            continue;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            int v=pr.fi,c=pr.se;
            if(dis[v]>dis[u]+c)
            {
                dis[v]=dis[u]+c;
                pq.push(mpp(dis[v],v));
            }
        }
    }
}
int main()
{
    FAST;
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        map<string,int>mp;
        int ind=1,t;
        sf(n);
        setvalue();
        rep0(i,n)
        {
            char tmp[101];
            scanf("%s",tmp);
            mp[tmp]=ind;
            int p,q,r;
            sf(r);
            while(r--)
            {
                sff(p,q);
                grid[ind].pb(mpp(p,q));
            }
            ind++;
        }
        sf(t);
        while(t--)
        {
            char x[100],y[100];
            scanf("%s",x);
            scanf("%s",y);
            st=mp[x];
            en=mp[y];
            resetvalue();
            dijkstra(st);
            pf("%d\n",dis[en]);
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

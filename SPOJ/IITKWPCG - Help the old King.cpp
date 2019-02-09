#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,m;
int par[N];
struct edge
{
    int u,v,w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
vector<edge>vec;
void setpar()
{
    int i;
    rep(i,n)
        par[i]=i;
}
int getdiv(ll p)
{
    ll x=1;
    int cnt=0;
    while(x<p)
    {
        cnt++;
        x*=2;
    }
    return cnt;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
ll mst()
{
    ll cost=0,i;
    setpar();
    sort(all(vec));
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
        }
    }
    return cost;
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        vec.clear();
        sff(n,m);
        int i,u,v;
        ll w;
        rep0(i,m)
        {
            sff(u,v);
            sl(w);
            int d=getdiv(w);
            vec.pb({u,v,d});
        }
        ll cost=mst()+1;
        pf("%lld\n",cost);
    }
}

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
#define N 2001
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
double road,rail;
int state,m,r;
int par[N];
struct edge
{
    int u,v;
    double w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
vector<edge>vec;
struct point
{
    int x,y;
}pnt[N];
void reset()
{
    vec.clear();
    int i;
    rep0(i,m+1)
        par[i]=i;
}
double calc(point a,point b)
{
    int x1=a.x,y1=a.y;
    int x2=b.x,y2=b.y;
    ll x=(x2-x1)*(x2-x1);
    ll y=(y2-y1)*(y2-y1);
    return sqrt(x+y);
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
void mst()
{
    int i;
    sort(all(vec));
    state=1;
    rail=0.0;
    road=0.0;
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v && vec[i].w>r)
        {
            rail+=vec[i].w;
            state++;
            par[u]=v;
        }
        else if(u!=v)
        {
            road+=vec[i].w;
            par[u]=v;
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j;
        sff(m,r);
        reset();
        rep0(i,m)
            sff(pnt[i].x,pnt[i].y);
        rep0(i,m-1)
        {
            reps(j,i+1,m-1)
            {
                double dis=calc(pnt[i],pnt[j]);
                vec.pb({i,j,dis});
            }
        }
        mst();
        road=floor(road+.5);
        rail=floor(rail+.5);
        pf("Case #%d: %d %.0f %.0f\n",t,state,road,rail);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

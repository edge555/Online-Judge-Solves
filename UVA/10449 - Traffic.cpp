#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define N 205
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,m,dis[N];
vector<int>vec;
struct edge
{
    int u,v,w;
};
vector<edge>grid;
int cube(int p)
{
    return p*p*p;
}
void reset()
{
    int i;
    rep0(i,n+1)
        dis[i]=1e9;
    dis[1]=0;
    grid.clear();
    vec.clear();
}
void belmanford()
{
    int i,j;
    rep0(i,n-1)
    {
        rep0(j,m)
        {
            edge e=grid[j];
            int u=e.u,v=e.v,w=e.w;
            if(dis[u]==1e9)
                continue;
            if(dis[v]>dis[u]+w)
                dis[v]=dis[u]+w;
        }
    }
}
int main()
{
    int t=1;
    while(sf(n)!=EOF)
    {
        int i,k;
        reset();
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        sf(m);
        int a,b,q;
        rep0(i,m)
        {
            sff(a,b);
            grid.pb({a,b,cube(vec[b-1]-vec[a-1])});
        }
        belmanford();
        sf(q);
        pf("Set #%d\n",t++);
        while(q--)
        {
            sf(a);
            if(dis[a]<3 || dis[a]==1e9)
                puts("?");
            else
                pf("%d\n",dis[a]);
        }
    }
}

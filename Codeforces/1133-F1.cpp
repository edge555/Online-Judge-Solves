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
#define N 200005
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
int n,m,node,par[N];
vector<int>grid[N];
vector<pi>vec;
unordered_map<int,int>mp;
void reset()
{
    int i;
    rep(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
void mst(int p)
{
    int i,cnt=grid[node].size();
    rep0(i,vec.size())
    {
        if(cnt==n-1)
            break;
        int x=vec[i].fi;
        int y=vec[i].se;
        if(x==node || y==node)
            continue;
        int u=findpar(x),v=findpar(y);
        if(u!=v)
        {
            par[u]=v;
            cnt++;
            printf("%d %d\n",x,y);
        }
    }
}
int main()
{
    sff(n,m);
    int i,a,b,mx=-1;
    rep0(i,m)
    {
        sff(a,b);
        mp[a]++;
        mp[b]++;
        if(mp[a]>mx)
        {
            mx=mp[a];
            node=a;
        }
        if(mp[b]>mx)
        {
            mx=mp[b];
            node=b;
        }
        grid[a].pb(b);
        grid[b].pb(a);
        vec.pb({a,b});
    }
    reset();
    rep0(i,grid[node].size())
    {
        pf("%d %d\n",node,grid[node][i]);
        par[grid[node][i]]=node;
    }
    if(n-1==grid[node].size())
        return 0;
    mst(grid[node].size());
}

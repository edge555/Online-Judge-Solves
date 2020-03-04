#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int n,w,cnt[N],ind[N],tree[4*N],ara[N];
vector<int>st,grid[N];
void reset()
{
    int i;
    rep0(i,n+1)
    {
        grid[i].clear();
        cnt[i]=0;
        ara[i]=0;
    }
    st.clear();
}
void dfs(int u,int par)
{
    cnt[u]=1;
    int i,v;
    rep0(i,grid[u].size())
    {
        v=grid[u][i];
        if(v==par)
            continue;
        dfs(v,u);
        cnt[u]+=cnt[v];
    }
    st.pb(u);
}
void build(int node,int b,int e)
{
    if(b>e)
        return;
    if(b==e)
    {
        tree[node]=1;
        return;
    }
    int left=2*node,right=left+1;
    int mid=(b+e)>>1;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
void update(int node,int b,int e,int l,int r)
{
    if(!tree[node] || w<=0 || r<b || l>e)
        return;
    if(b==e)
    {
        w--;
        tree[node]=0;
        ara[st[b-1]]=1;
        return;
    }
    int left=2*node,right=left+1;
    int mid=(b+e)>>1;
    update(left,b,mid,l,r);
    update(right,mid+1,e,l,r);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sf(n);
        reset();
        int i,u,v;
        rep0(i,n-1)
        {
            sff(u,v);
            grid[u].pb(v);
            grid[v].pb(u);
        }
        rep(i,n)
            sort(all(grid[i]));
        dfs(1,-1);
        rep0(i,st.size())
            ind[st[i]]=i+1;
        build(1,1,n);
        int q;
        sf(q);
        pf("Case %d:\n",t);
        while(q--)
        {
            int c,x;
            sff(c,x);
            if(c==1)
            {
                sf(w);
                int l=ind[x]-cnt[x]+1;
                int r=ind[x];
                update(1,1,n,l,r);
            }
            else
                pf("%d\n",ara[x]);
        }
    }
}

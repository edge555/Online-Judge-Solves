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
int ara[N],sum[51][4*N];
bool vis[51];
void build(int node,int l,int r,int x)
{
    if(l==r)
    {
        sum[x][node]=(ara[l-1]==x);
        return;
    }
    int mid=(l+r)>>1;
    int left=2*node,right=left+1;
    build(left,l,mid,x);
    build(right,mid+1,r,x);
    sum[x][node]=sum[x][left]+sum[x][right];
}
int query(int node,int b,int e,int l,int r,int x)
{
    if(r<b || e<l)
        return 0;
    if(b>=l && e<=r)
        return sum[x][node];
    int mid=(b+e)>>1;
    int left=2*node,right=left+1;
    int q1=query(left,b,mid,l,r,x);
    int q2=query(right,mid+1,e,l,r,x);
    return q1+q2;
}
int main()
{
    int i,n,q;
    sf(n);
    rep0(i,n)
    {
        sf(ara[i]);
        vis[ara[i]]=true;
    }
    rep(i,50)
    {
        if(vis[i])
            build(1,1,n,i);
    }
    int l,r,x;
    sf(q);
    while(q--)
    {
        sfff(l,r,x);
        int cnt=0;
        rep(i,50)
            cnt+=query(1,1,n,l,r,i)>=x;
        pf("%d\n",cnt);
    }
}


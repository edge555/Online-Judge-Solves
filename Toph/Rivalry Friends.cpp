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
#define N 100015
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
ll phi[N],prime[N];
ll ara[N],tree[4*N];
void sievephi()
{
    ll i,j;
    rep(i,N)
        phi[i]=i;
    phi[1]=1;
    prime[1]=1;
    for(i=2;i<N;i++)
    {
        if(phi[i]==i)
        {
            for(j=i;j<N;j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}
void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=phi[ara[b]];
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(ll node,ll b,ll e,ll i,ll value)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)
    {
        tree[node]=value;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    sievephi();
    ll i,n,q;
    sll(n,q);
    rep(i,n)
        sl(ara[i]);
    build(1,1,n);
    while(q--)
    {
        ll a,b,c;
        slll(a,b,c);
        if(a&1)
            update(1,1,n,b,phi[c]);
        else
            pf("%lld\n",query(1,1,n,b,c));
    }
}


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
ll a[N],tree[4*N];
map<ll,ll>mp;
void update(ll node,ll lo,ll hi,ll i,ll x)
{
    if(lo>i||hi<i)
        return;
    if(lo==i && hi==i)
    {
        tree[node]=max(tree[node],x);
        return;
    }
    ll mid=(lo+hi)>>1;
    ll left=node<<1;
    ll right=left+1;
    update(left,lo,mid,i,x);
    update(right,mid+1,hi,i,x);
    tree[node]=max(tree[left],tree[right]);
}
ll query(ll node,ll lo,ll hi,ll l,ll r)
{
    if(l>r)
        return 0;
    if(lo>r || hi<l)
        return 0;
    if(lo>=l && hi<=r)
        return tree[node];
    ll mid=(lo+hi)>>1;
    ll left=node<<1;
    ll right=left+1;
    ll q1=query(left,lo,mid,l,r);
    ll q2=query(right,mid+1,hi,l,r);
    return max(q1,q2);
}
int main()
{
    ll i,n;
    sl(n);
    rep(i,n)
    {
        sl(a[i]);
        mp[a[i]]=0;
    }
    ll id=1;
    for(auto i:mp)
    {
        mp[i.fi]=id;
        id++;
    }
    rep(i,n)
    {
        ll mx=query(1,1,n,1,mp[a[i]]-1);
        update(1,1,n,mp[a[i]],mx+a[i]);
    }
    ll ans=query(1,1,n,1,id);
    pf("%lld",ans);
}

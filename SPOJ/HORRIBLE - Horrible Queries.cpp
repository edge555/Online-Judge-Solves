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
#define N 100005
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
ll ara[N],tree[4*N],lazy[4*N];
void update(ll node,ll st,ll en,ll l,ll r,ll val)
{
    if(lazy[node]!=0)
    {
        tree[node]+=(en-st+1)*lazy[node];
        if(st!=en)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(st>en || st>r || en<l)
        return;
    if(st>=l && en<=r)
    {
        tree[node]+=(en-st+1)*val;
        if(st!=en)
        {
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }
        return;
    }
    ll mid=(st+en)/2;
    ll left=2*node,right=left+1;
    update(left,st,mid,l,r,val);
    update(right,mid+1,en,l,r,val);
    tree[node]=tree[left]+tree[right];
}
ll query(ll node,ll st,ll en,ll l,ll r)
{
    if(st>en || st>r || en<l)
        return 0;
    if(lazy[node]!=0)
    {
        tree[node]+=(en-st+1)*lazy[node];
        if(st!=en)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(st>=l && en<=r)
        return tree[node];
    ll mid=(st+en)/2;
    ll left=2*node,right=left+1;
    ll ans1=query(left,st,mid,l,r);
    ll ans2=query(right,mid+1,en,l,r);
    return ans1+ans2;
}
int main()
{
    ll t,tc;
    sl(tc);
    rep(t,tc)
    {
        ll i,n,q;
        sll(n,q);
        mem(tree,0);
        mem(lazy,0);
        ll a,b,c,v;
        while(q--)
        {
            sl(c);
            if(c)
            {
                sll(a,b);
                pf("%lld\n",query(1,1,n,a,b));
            }
            else
            {
                slll(a,b,v);
                update(1,1,n,a,b,v);
            }
        }
    }
}

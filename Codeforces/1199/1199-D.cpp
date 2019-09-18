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
#define N 200100
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
struct node
{
    ll mx,prop;
}tree[4*N];
ll ara[N];
void build(ll cur,ll st,ll en)
{
    if(st>en)
        return;
    tree[cur].prop=0;
    if(st==en)
    {
        tree[cur].mx=ara[st];
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
}
void update1(ll cur,ll st,ll en,ll l,ll r,ll val)
{
    if(tree[cur].prop)
    {
        if(st!=en)
        {
            tree[2*cur].prop=max(tree[2*cur].prop,tree[cur].prop);
            tree[2*cur+1].prop=max(tree[2*cur+1].prop,tree[cur].prop);
        }
        else
            tree[cur].mx=max(tree[cur].mx,tree[cur].prop);
        tree[cur].prop=0;
    }
    if(st>en || st>r || en<l)
        return;
    if(st==l && en==r)
    {
        tree[cur].mx=val;
        return;
    }
    ll mid=(st+en)/2;
    ll left=2*cur,right=left+1;
    update1(left,st,mid,l,r,val);
    update1(right,mid+1,en,l,r,val);
}
void update2(ll cur,ll st,ll en,ll l,ll r,ll val)
{
    if(tree[cur].prop)
    {
        if(st!=en)
        {
            tree[2*cur].prop=max(tree[2*cur].prop,tree[cur].prop);
            tree[2*cur+1].prop=max(tree[2*cur+1].prop,tree[cur].prop);
        }
        else
            tree[cur].mx=max(tree[cur].mx,tree[cur].prop);
        tree[cur].prop=0;
    }
    if(st>en || st>r || en<l)
        return;
    if(st>=l && en<=r)
    {
        tree[cur].prop=max(tree[cur].prop,val);
        return;
    }
    ll mid=(st+en)/2;
    ll left=2*cur,right=left+1;
    update2(left,st,mid,l,r,val);
    update2(right,mid+1,en,l,r,val);
}
ll query(ll cur,ll st,ll en,ll l,ll r)
{
    if(st>en || st>r || en<l)
        return 0;
    if(tree[cur].prop)
    {
        if(st!=en)
        {
            tree[2*cur].prop=max(tree[2*cur].prop,tree[cur].prop);
            tree[2*cur+1].prop=max(tree[2*cur+1].prop,tree[cur].prop);
        }
        else
            tree[cur].mx=max(tree[cur].mx,tree[cur].prop);
        tree[cur].prop=0;
    }
    if(st==l && en==r)
        return tree[cur].mx;
    ll mid=(st+en)/2;
    ll left=2*cur,right=left+1;
    ll ans1=query(left,st,mid,l,r);
    ll ans2=query(right,mid+1,en,l,r);
    return ans1+ans2;
}
int main()
{
    FAST;
    ll i,n,q;
    cin>>n;
    ll a,b,c,v;
    rep(i,n)
        cin>>ara[i];
    build(1,1,n);
    cin>>q;
    while(q--)
    {
        cin>>c;
        if(c==1)
        {
            cin>>a>>b;
            update1(1,1,n,a,a,b);
        }
        else
        {
            cin>>b;
            update2(1,1,n,1,n,b);
        }
    }
    rep(i,n)
        cout<<query(1,1,n,i,i)<<" ";
}

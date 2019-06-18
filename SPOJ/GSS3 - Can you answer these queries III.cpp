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
ll ara[N];
ll max5(ll a,ll b,ll c,ll d,ll e)
{
    return max(a,max(b,max(c,max(d,e))));
}
struct seg
{
    ll maxsum,prfsum,sufsum,totsum;
    void init(ll val)
    {
        maxsum=val;
        prfsum=val;
        sufsum=val;
        totsum=val;
    }
    void mergeseg(seg left,seg right)
    {
        prfsum=max(left.prfsum,left.totsum+right.prfsum);
        sufsum=max(right.sufsum,right.totsum+left.sufsum);
        totsum=left.totsum+right.totsum;
        maxsum=max5(prfsum,sufsum,left.sufsum+right.prfsum,left.maxsum,right.maxsum);
    }
}tree[4*N];
void build(ll node,ll st,ll en)
{
    if(st>en)
        return;
    if(st==en)
    {
        seg cur;
        cur.init(ara[st]);
        tree[node]=cur;
        return;
    }
    ll mid=(st+en)/2;
    ll left=2*node+1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[node].mergeseg(tree[left],tree[right]);
}
seg query(ll node,ll st,ll en,ll l,ll r)
{
    seg cur;
    cur.init(-1e18);
    if(st>r || en<l)
        return cur;
    if(l<=st && en<=r)
        return tree[node];
    ll mid=(st+en)/2;
    ll left=2*node+1,right=left+1;
    seg leftres=query(left,st,mid,l,r);
    seg rightres=query(right,mid+1,en,l,r);
    if(l>mid)
        return rightres;
    if(r<=mid)
        return leftres;
    cur.mergeseg(leftres,rightres);
    return cur;
}
void update(ll node,ll st,ll en,ll i,ll val)
{
    seg cur;
    cur.init(-1e18);

    if(st==en)
    {
        seg cur;
        cur.init(val);
        tree[node]=cur;
        return;
    }
    ll mid=(st+en)/2;
    ll left=2*node+1,right=left+1;
    if(i<=mid)
        update(left,st,mid,i,val);
    else
        update(right,mid+1,en,i,val);
    cur.prfsum=max(tree[left].prfsum,tree[left].totsum+tree[right].prfsum);
    cur.sufsum=max(tree[right].sufsum,tree[right].totsum+tree[left].sufsum);
    cur.totsum=tree[left].totsum+tree[right].totsum;
    cur.maxsum=max5(cur.prfsum,cur.sufsum,tree[left].sufsum+tree[right].prfsum,tree[left].maxsum,tree[right].maxsum);
    tree[node]=cur;
}
int main()
{
    ll i,n,q;
    sl(n);
    rep0(i,n)
        sl(ara[i]);
    build(0,0,n-1);
    ll k,a,b;
    sl(q);
    while(q--)
    {
        slll(k,a,b);
        if(k)
            pf("%lld\n",query(0,0,n-1,a-1,b-1).maxsum);
        else
            update(0,0,n-1,a-1,b);
    }
}

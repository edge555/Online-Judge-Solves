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
vector<int>vec={2};
const int MAX=100000000;
const int LMT=10000;
int flag[MAX>>6];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
bool prime(int n)
{
    return (n&1 && n!=1 && !chkbit(n)) || n==2;
}
void sieve()
{
    long long int i,j,k;
    for(i=3;i<LMT;i+=2)
    {
        if(!chkbit(i))
        {
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setbit(j);
        }
    }
    for(i=3;i<=MAX;i+=2)
    {
        if(prime(i))
            vec.pb(i);
    }
}
int ara[N],tree[4*N],tree2[4*N];
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        tree2[node]=ara[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=max(tree[left],tree[right]);
    tree2[node]=min(tree2[left],tree2[right]);
}
int querymn(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return INT_MAX;
    if(b>=i && e<=j)
        return tree2[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=querymn(left,b,mid,i,j);
    int p2=querymn(right,mid+1,e,i,j);
    return min(p1,p2);
}
int querymx(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return -1;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=querymx(left,b,mid,i,j);
    int p2=querymx(right,mid+1,e,i,j);
    return max(p1,p2);
}
void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)
    {
        tree[node]=value;
        tree2[node]=value;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node]=max(tree[left],tree[right]);
    tree2[node]=min(tree2[left],tree2[right]);
}
int main()
{
    sieve();
    int i,n,q;
    sff(n,q);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int a,b,c;
    while(q--)
    {
        sfff(c,a,b);
        if(c&1)
            update(1,1,n,a,b);
        else
        {
            int mn=querymn(1,1,n,a,b);
            int mx=querymx(1,1,n,a,b);
            int l=lower_bound(all(vec),mn)-vec.begin();
            int r=upper_bound(all(vec),mx)-vec.begin();
            pf("%d\n",r-l);
        }
    }
}

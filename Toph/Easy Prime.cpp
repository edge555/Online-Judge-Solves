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
const int MAX=100000000;
const int LMT=10000;
int flag[MAX>>6];
int ara[N],tree[4*N];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
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
}
bool prime(int n)
{
    return (n&1 && n!=1 && !chkbit(n)) || n==2;
}
void build(int cur,int st,int en)
{
    if(st>en)
        return;
    if(st==en)
    {
        if(prime(ara[st]))
            tree[cur]=1;
        else
            tree[cur]=0;
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[cur]=tree[left]+tree[right];
}
void update(int cur,int st,int en,int l,int r,int val)
{
    if(st>en || st>r || en<l)
        return;
    if(st>=l && en<=r)
    {
        if(prime(val))
            tree[cur]=1;
        else
            tree[cur]=0;
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    update(left,st,mid,l,r,val);
    update(right,mid+1,en,l,r,val);
    tree[cur]=tree[left]+tree[right];
}
int query(int cur,int st,int en,int l,int r)
{
    if(st>en || st>r || en<l)
        return 0;
    if(st>=l && en<=r)
        return tree[cur];
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    int x=query(left,st,mid,l,r);
    int y=query(right,mid+1,en,l,r);
    return x+y;
}
int main()
{
    sieve();
    int i,n;
    sf(n);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int q,a,b,c;
    sf(q);
    while(q--)
    {
        sfff(c,a,b);
        if(c&1)
            pf("%d\n",query(1,1,n,a,b));
        else
            update(1,1,n,a,a,b);
    }
}

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
int ara[N],tree[4*N];
void build(int node,int a,int b)
{
    if(a>b)
        return;
    if(a==b)
    {
        tree[node]=ara[a];
        return;
    }
    int mid=(a+b)/2;
    build(node*2,a,mid);
    build(node*2+1,1+mid,b);
    tree[node]=__gcd(tree[node*2],tree[node*2+1]);
}
int query(int node,int a,int b,int i,int j)
{
    if(a>b || a>j || b<i)
        return 0;
    if(a>=i && b<=j)
        return tree[node];
    int mid=(a+b)/2;
    int q1=query(node*2,a,mid,i,j);
    int q2=query(1+node*2,1+mid,b,i,j);
    return __gcd(q1,q2);
}
int main()
{

    int i,n;
    sf(n);
    for(i=0;i<n;i++)
        sf(ara[i]);
    if(n==2)
    {
        pf("%d\n",max(ara[0],ara[1]));
        return 0;
    }
    build(1,0,n-1);
    int mx=max(query(1,0,n-1,1,n-1),query(1,0,n-1,0,n-2));
    for(i=1;i<n-1;i++)
    {
        int l=query(1,0,n-1,0,i-1);
        int r=query(1,0,n-1,i+1,n-1);
        mx=max(mx,__gcd(l,r));
    }
    pf("%d\n",mx);
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
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
int ara[N],treex[4*N],treen[4*N];
void build(int node,int b,int e)
{
    if(b==e)
    {
        treex[node]=ara[b];
        treen[node]=ara[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    treex[node]=max(treex[left],treex[right]);
    treen[node]=min(treen[left],treen[right]);
}
int queryx(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return treex[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=queryx(left,b,mid,i,j);
    int p2=queryx(right,mid+1,e,i,j);
    return max(p1,p2);
}
int queryn(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 1e9;
    if(b>=i && e<=j)
        return treen[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=queryn(left,b,mid,i,j);
    int p2=queryn(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int i,n;
    sf(n);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int q,k;
    sf(q);
    while(q--)
    {
        sf(k);
        int mx=queryx(1,1,n,1,k);
        if(mx==1e9)
            mx=0;
        int mn=queryn(1,1,n,k+1,n);
        if(mn==1e9)
            mn=0;
        pf("%d %d\n",mx,mn);
    }
}

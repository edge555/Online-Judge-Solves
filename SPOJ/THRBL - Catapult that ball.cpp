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
#define N 50005
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
void build(int cur,int i,int j)
{
    if(i==j)
    {
        tree[cur]=ara[i];
        return;
    }
    int left=2*cur,right=left+1,mid=(i+j)>>1;
    build(left,i,mid);
    build(right,mid+1,j);
    tree[cur]=max(tree[left],tree[right]);
}
int query(int cur,int l,int r,int i,int j)
{
    if(i>r || j<l)
        return 0;
    if(l>=i && r<=j)
        return tree[cur];
    int left=2*cur,right=left+1,mid=(l+r)>>1;
    int q1=query(left,l,mid,i,j);
    int q2=query(right,mid+1,r,i,j);
    return max(q1,q2);
}
int main()
{
    int i,n,m,a,b,cnt=0;
    sff(n,m);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    while(m--)
    {
        sff(a,b);
        if(a>b)
            swap(a,b);
        cnt+=(query(1,1,n,a,b-1)<=ara[a]);
    }
    pf("%d",cnt);
}

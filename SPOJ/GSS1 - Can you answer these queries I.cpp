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
int ara[N];
int max5(int a,int b,int c,int d,int e)
{
    return max(a,max(b,max(c,max(d,e))));
}
struct seg
{
    int maxsum,prfsum,sufsum,totsum;
    void init(int val)
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
void build(int node,int st,int en)
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
    int mid=(st+en)/2;
    int left=2*node+1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[node].mergeseg(tree[left],tree[right]);
}
seg query(int node,int st,int en,int l,int r)
{
    seg cur;
    cur.init(INT_MIN);
    if(st>en || st>r || en<l)
        return cur;
    if(l<=st && en<=r)
        return tree[node];
    int mid=(st+en)/2;
    int left=2*node+1,right=left+1;
    seg leftres=query(left,st,mid,l,r);
    seg rightres=query(right,mid+1,en,l,r);
    if(l>mid)
        return rightres;
    if(r<=mid)
        return leftres;
    cur.mergeseg(leftres,rightres);
    return cur;
}
int main()
{
    int i,n,q;
    sf(n);
    rep0(i,n)
        sf(ara[i]);
    build(0,0,n-1);
    int a,b;
    sf(q);
    while(q--)
    {
        sff(a,b);
        pf("%d\n",query(0,0,n-1,a-1,b-1));
    }
}

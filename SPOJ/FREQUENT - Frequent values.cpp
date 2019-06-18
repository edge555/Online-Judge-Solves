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
struct node
{
    int lmv,rmv,lfr,rfr,mx;
    void init(int x)
    {
        lmv=rmv=x;
        lfr=rfr=mx=1;
    }
}tree[4*N];
void build(int nd,int st,int en)
{
    node cur;
    cur.init(ara[st]);
    if(st==en)
    {
        tree[nd]=cur;
        return;
    }
    int mid=(st+en)/2;
    int left=2*nd,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    cur.lmv=tree[left].lmv;
    cur.rmv=tree[right].rmv;
    cur.lfr=tree[left].lfr;
    cur.rfr=tree[right].rfr;
    cur.mx=max(tree[left].mx,tree[right].mx);
    tree[nd]=cur;
    if(tree[left].rmv==tree[right].lmv)
    {
        tree[nd].mx=max(tree[nd].mx,tree[left].rfr+tree[right].lfr);
        if(tree[left].lmv==tree[left].rmv)
            tree[nd].lfr+=tree[right].lfr;
        if(tree[right].lmv==tree[right].rmv)
            tree[nd].rfr+=tree[left].rfr;
    }
}
int query(int nd,int st,int en,int l,int r)
{
    if(r<st || en<l)
        return -1;
    if(st>=l && en<=r)
        return tree[nd].mx;
    int mid=(st+en)/2;
    int left=2*nd,right=left+1;
    int ansl=query(left,st,mid,l,r);
    int ansr=query(right,mid+1,en,l,r);
    int ans=max(ansl,ansr);
    int ql,qr;
    if(tree[left].rmv==tree[right].lmv)
    {
        ql=min(mid-l+1,tree[left].rfr);
        qr=min(r-mid,tree[right].lfr);
        ans=max(ans,ql+qr);
    }
    return ans;
}
int main()
{
    int n,q;
    while(1)
    {
        sf(n);
        if(!n)
            return 0;
        sf(q);
        int i,k;
        rep(i,n)
            sf(ara[i]);
        build(1,1,n);
        int a,b;
        while(q--)
        {
            sff(a,b);
            pf("%d\n",query(1,1,n,a,b));
        }
    }
}

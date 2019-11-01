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
#define N 205
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("----------")
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int arr[N],tree[4*N],lazy[4*N];
struct info
{
    int l,r,i;
};
vector<info>vec;
bool comp(info a,info b)
{
    if(a.r!=b.r)
        return a.r<b.r;
    return a.l<b.l;
}
void update(int node,int a,int b,int i,int j,int value)
{
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(a!= b)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(a>b || a>j || b<i)
        return;
    if(a>=i && b<=j)
    {
        tree[node]+=value;
        if(a!=b)
        {
            lazy[node*2]+=value;
            lazy[node*2+1]+=value;
        }
        return;
    }
    int mid=(a+b)/2;
    update(node*2,a,mid,i,j,value);
    update(1+node*2,1+mid,b,i,j,value);
    tree[node]=max(tree[node*2],tree[node*2+1]);
}
int query(int node,int a,int b,int i,int j)
{
    if(a>b || a>j || b<i)
        return 0;
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(a!=b)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(a>=i && b<=j)
        return tree[node];
    int mid=(a+b)/2;
    int q1=query(node*2,a,mid,i,j);
    int q2=query(1+node*2,1+mid,b,i,j);
    int res=max(q1,q2);
    return res;
}
int main()
{
    int i,n,k,a,b,mx=-1;
    sff(n,k);
    rep0(i,n)
    {
        sff(a,b);
        mx=max(mx,b);
        vec.pb({a,b,i+1});
    }
    sort(all(vec),comp);
    queue<int>q;
    rep0(i,n)
    {
        int l=vec[i].l,r=vec[i].r;
        int mxv=query(1,0,mx-1,l-1,r-1);
        if(mxv<k)
            update(1,0,mx-1,l-1,r-1,1);
        else
            q.push(vec[i].i);
    }
    pf("%d\n",q.size());
    while(!q.empty())
    {
        pf("%d ",q.front());
        q.pop();
    }
}

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
    int mx,mxx;
}tree[4*N];
node mergeseg(node a,node b)
{
    vector<int>vec;
    vec.pb(a.mx);
    vec.pb(a.mxx);
    vec.pb(b.mx);
    vec.pb(b.mxx);
    sort(all(vec));
    node nd;
    nd.mx=vec[3];
    nd.mxx=vec[2];
    return nd;
}
void build(int cur,int st,int en)
{
    if(st>en)
        return;
    if(st==en)
    {
        tree[cur].mx=ara[st];
        tree[cur].mxx=-1;
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[cur]=mergeseg(tree[left],tree[right]);
}
node query(int cur,int st,int en,int l,int r)
{
    if(st>=l && en<=r)
        return tree[cur];
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    if(r<=mid)
        return query(left,st,mid,l,r);
    else if(l>mid)
        return query(right,mid+1,en,l,r);
    else
        return mergeseg(query(left,st,mid,l,r),query(right,mid+1,en,l,r));
}
void update(int cur,int st,int en,int i,int val)
{
    if(st>en)
        return;
    if(st==en)
    {
        ara[st]=val;
        tree[cur].mx=val;
        tree[cur].mxx=-1;
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    if(i<=mid)
        update(left,st,mid,i,val);
    else
        update(right,mid+1,en,i,val);
    tree[cur]=mergeseg(tree[left],tree[right]);
}
int main()
{
    int i,n;
    sf(n);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int q,a,b;
    sf(q);
    char ch;
    while(q--)
    {
        getchar();
        sc("%c %d %d",&ch,&a,&b);
        if(ch=='U')
            update(1,1,n,a,b);
        else
        {
            node nd=query(1,1,n,a,b);
            pf("%d\n",nd.mx+nd.mxx);
        }
    }
}

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
    int e,o;
}tree[4*N];
void build(int cur,int st,int en)
{
    if(st>en)
        return;
    if(st==en)
    {
        node nd;
        nd.e=0;
        nd.o=0;
        if(ara[st]&1)
            nd.o++;
        else
            nd.e++;
        tree[cur]=nd;
        return;
    }
    int mid=(st+en)/2;
    int left=2*cur,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[cur].o=tree[left].o+tree[right].o;
    tree[cur].e=tree[left].e+tree[right].e;
}
void update(int cur,int st,int en,int ind,int val)
{
    if(st>en)
        return;
    if(st==en)
    {
        node nd;
        nd.e=0;
        nd.o=0;
        if(val&1)
            nd.o++;
        else
            nd.e++;
        tree[cur]=nd;
        return;
    }
    int mid=(st+en)/2;
    int left=2*cur,right=left+1;
    if(ind<=mid)
        update(left,st,mid,ind,val);
    else
        update(right,mid+1,en,ind,val);
    node nd;
    nd.e=tree[left].e+tree[right].e;
    nd.o=tree[right].o+tree[left].o;
    tree[cur]=nd;
}
int query(int cur,int st,int en,int l,int r,int type)
{
    if(st>r || en<l)
        return 0;
    if(st>=l && en<=r)
    {
        if(type&1)
            return tree[cur].o;
        else
            return tree[cur].e;
    }
    int mid=(st+en)/2;
    int left=2*cur,right=left+1;
    int ans1=query(left,st,mid,l,r,type);
    int ans2=query(right,mid+1,en,l,r,type);
    if(l>mid)
        return ans2;
    else if(r<=mid)
        return ans1;
    return ans1+ans2;
}
int main()
{
    int i,n,k;
    sf(n);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int q,a,b,c;
    sf(q);
    while(q--)
    {
        sfff(c,a,b);
        if(c==0)
            update(1,1,n,a,b);
        else
            pf("%d\n",query(1,1,n,a,b,c-1));
    }
}

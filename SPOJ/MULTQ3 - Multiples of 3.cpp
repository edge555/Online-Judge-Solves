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
struct seg
{
    int z,o,t,prop;
}tree[4*N];
void rotate_val(int node)
{
    int temp=tree[node].t;
    tree[node].t=tree[node].o;
    tree[node].o=tree[node].z;
    tree[node].z=temp;
}
void update_child(int node,int left,int right)
{
    tree[left].prop+=tree[node].prop;
    tree[right].prop+=tree[node].prop;
    int i;
    rep0(i,tree[node].prop%3)
    {
        rotate_val(left);
        rotate_val(right);
    }
    tree[node].prop=0;
}
void build(int node,int st,int en)
{
    if(st>en)
        return;
    if(st==en)
    {
        tree[node].z=1;
        tree[node].o=0;
        tree[node].t=0;
        tree[node].prop=0;
        return;
    }
    int mid=(st+en)/2;
    int left=2*node,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[node].z=tree[left].z+tree[right].z;
    tree[node].o=tree[left].o+tree[right].o;
    tree[node].t=tree[left].t+tree[right].t;
    tree[node].prop=tree[left].prop+tree[right].prop;
}
void update(int node,int st,int en,int l,int r)
{
    if(st>en)
        return;
    if(st==l && en==r)
    {
        tree[node].prop++;
        rotate_val(node);
        return;
    }
    int mid=(st+en)/2;
    int left=2*node,right=left+1;
    if(tree[node].prop)
        update_child(node,left,right);
    if(r<=mid)
        update(left,st,mid,l,r);
    else if(l>mid)
        update(right,mid+1,en,l,r);
    else
    {
        update(left,st,mid,l,mid);
        update(right,mid+1,en,mid+1,r);
    }
    tree[node].z=tree[left].z+tree[right].z;
    tree[node].o=tree[left].o+tree[right].o;
    tree[node].t=tree[left].t+tree[right].t;
}
int query(int node,int st,int en,int l,int r)
{
    if(st==l && en==r)
        return tree[node].z;
    int mid=(st+en)/2;
    int left=2*node,right=left+1;
    if(tree[node].prop)
        update_child(node,left,right);
    if(r<=mid)
        return query(left,st,mid,l,r);
    else if(l>mid)
        return query(right,mid+1,en,l,r);
    else
        return query(left,st,mid,l,mid)+query(right,mid+1,en,mid+1,r);
}
int main()
{
    int n,q;
    sff(n,q);
    int i,a,b,c;
    build(1,1,n);
    rep0(i,q)
    {
        sfff(c,a,b);
        if(c)
            pf("%d\n",query(1,1,n,a+1,b+1));
        else
            update(1,1,n,a+1,b+1);
    }
}

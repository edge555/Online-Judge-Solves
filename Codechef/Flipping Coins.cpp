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
struct node
{
    int sum,prop;
}tree[4*N];
void update(int cur,int st,int en,int l,int r)
{
    if(st>en || st>r || en<l)
        return;
    if(st>=l && en<=r)
    {
        tree[cur].sum=(en-st+1)-tree[cur].sum;
        tree[cur].prop++;
        return;
    }
    int mid=(st+en)/2;
    int left=2*cur,right=left+1;
    update(left,st,mid,l,r);
    update(right,mid+1,en,l,r);
    tree[cur].sum=tree[left].sum+tree[right].sum;
    if(tree[cur].prop&1)
        tree[cur].sum=(en-st+1)-tree[cur].sum;
}
int query(int cur,int st,int en,int l,int r,int carry)
{
    if(st>en || st>r || en<l)
        return 0;
    if(st>=l && en<=r)
    {
        if(carry&1)
            return en-st+1-tree[cur].sum;
        else
            return tree[cur].sum;
    }
    int mid=(st+en)/2;
    int left=2*cur,right=left+1;
    int ans1=query(left,st,mid,l,r,carry+tree[cur].prop);
    int ans2=query(right,mid+1,en,l,r,carry+tree[cur].prop);
    return ans1+ans2;
}
int main()
{
    int i,n,q;
    sff(n,q);
    int a,b,c,v;
    while(q--)
    {
        sfff(c,a,b);
        if(c)
            pf("%d\n",query(1,1,n,a+1,b+1,0));
        else
            update(1,1,n,a+1,b+1);
    }
}

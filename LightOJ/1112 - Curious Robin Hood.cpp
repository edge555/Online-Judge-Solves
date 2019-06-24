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
int ara[N],tree[4*N];
void build(int cur,int st,int en)
{
    if(st>en)
        return;
    if(st==en)
    {
        tree[cur]=ara[st];
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    build(left,st,mid);
    build(right,mid+1,en);
    tree[cur]=tree[left]+tree[right];
}
void update(int cur,int st,int en,int l,int r,int val)
{
    if(st>en || st>r || en<l)
        return;
    if(st>=l && en<=r)
    {
        if(val==-1)
        {
            pf("%d\n",tree[cur]);
            tree[cur]=0;
        }
        else
            tree[cur]+=val;
        return;
    }
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    update(left,st,mid,l,r,val);
    update(right,mid+1,en,l,r,val);
    tree[cur]=tree[left]+tree[right];
}
int query(int cur,int st,int en,int l,int r)
{
    if(st>en || st>r || en<l)
        return 0;
    if(st>=l && en<=r)
        return tree[cur];
    int mid=(st+en)>>1;
    int left=cur<<1,right=left+1;
    int x=query(left,st,mid,l,r);
    int y=query(right,mid+1,en,l,r);
    return x+y;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,c,n,m;
        sff(n,m);
        rep(i,n)
            sf(ara[i]);
        build(1,1,n);
        pf("Case %d:\n",t);
        while(m--)
        {
            sff(c,i);
            if(c==1)
                update(1,1,n,i+1,i+1,-1);
            else
            {
                sf(j);
                if(c==2)
                    update(1,1,n,i+1,i+1,j);
                else
                    pf("%d\n",query(1,1,n,i+1,j+1));
            }
        }
    }
}

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
#define N 200005
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
int a[N],ara[N],tree[4*N];
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        return;
    }
    int mid=(b+e)>>1;
    int left=2*node,right=left+1;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
void update(int node,int b,int e,int i,int v)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)
    {
        tree[node]=v;
        return;
    }
    int left=2*node,right=left+1;
    int mid=(b+e)>>1;
    update(left,b,mid,i,v);
    update(right,mid+1,e,i,v);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int l,int r)
{
    if(l>e || r<b)
        return 0;
    if(b>=l && e<=r)
        return tree[node];
    int left=2*node,right=left+1;
    int mid=(b+e)>>1;
    int q1=query(left,b,mid,l,r);
    int q2=query(right,mid+1,e,l,r);
    return q1+q2;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        mem(ara,0);
        int i,n,q;
        sff(n,q);
        rep(i,n)
        {
            sf(a[i]);
            ara[i]=1;
        }
        int m=2*n,k;
        build(1,1,m);
        char ch;
        getchar();
        pf("Case %d:\n",t);
        while(q--)
        {
            ch=getchar();
            scanf("%d",&k);
            getchar();
            if(ch=='a')
            {
                a[++n]=k;
                update(1,1,m,n,1);
            }
            else
            {
                int lo=1,hi=n,ans=-1;
                while(lo<=hi)
                {
                    int mid=(lo+hi)>>1;
                    int sum=query(1,1,m,1,mid);
                    if(sum>=k)
                    {
                        ans=mid;
                        hi=mid-1;
                    }
                    else
                        lo=mid+1;
                }
                if(ans==-1)
                    puts("none");
                else
                {
                    pf("%d\n",a[ans]);
                    update(1,1,m,ans,0);
                }
            }
        }
    }
}

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
#define N 100005
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
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=max(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return max(p1,p2);
}
void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i)
    {
        tree[node]=value;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node]=max(tree[left],tree[right]);
}
int main()
{
    int i,n,q;
    cin>>n>>q;
    rep(i,n)
        cin>>ara[i];
    build(1,1,n);
    while(q--)
    {
        int c,x,y;
        sf(c);
        if(c)
        {
            sf(x);
            int hi=n,lo=1,ans=INT_MAX;
            while(lo<=hi)
            {
                int mid=(lo+hi)>>1;
                int p=query(1,1,n,1,mid);
                if(p>=x)
                {
                    hi=mid-1;
                    ans=min(ans,mid);
                }
                else
                    lo=mid+1;
            }
            if(ans==INT_MAX)
                ans=-1;
            pf("%d\n",ans);
        }
        else
        {
            sff(x,y);
            update(1,1,n,x,y);
        }
    }
}

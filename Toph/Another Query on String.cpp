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
string a;
int sum[27][4*N];
bool vis[27];
void build(int node,int l,int r,char x)
{
    if(l==r)
    {
        sum[x-'a'][node]=(a[l-1]==x);
        return;
    }
    int mid=(l+r)>>1;
    int left=2*node,right=left+1;
    build(left,l,mid,x);
    build(right,mid+1,r,x);
    sum[x-'a'][node]=sum[x-'a'][left]+sum[x-'a'][right];
}
void update(int node,int b,int e,int ind,char ch,char ch2)
{
    if(ind<b || ind>e)
        return;
    if(b==e)
    {
        sum[ch-'a'][node]=0;
        sum[ch2-'a'][node]=1;
        return;
    }
    int mid=(b+e)>>1;
    int left=2*node,right=left+1;
    update(left,b,mid,ind,ch,ch2);
    update(right,mid+1,e,ind,ch,ch2);
    sum[ch-'a'][node]=sum[ch-'a'][left]+sum[ch-'a'][right];
    sum[ch2-'a'][node]=sum[ch2-'a'][left]+sum[ch2-'a'][right];
}
int query(int node,int b,int e,int l,int r,char x)
{
    if(r<b || e<l)
        return 0;
    if(b>=l && e<=r)
        return sum[x-'a'][node];
    int mid=(b+e)>>1;
    int left=2*node,right=left+1;
    int q1=query(left,b,mid,l,r,x);
    int q2=query(right,mid+1,e,l,r,x);
    return q1+q2;
}
int main()
{
    FAST;
    int i,n,q;
    cin>>n>>q>>a;
    rep0(i,n)
        vis[a[i]-'a']=true;
    rep0(i,26)
    {
        if(vis[i])
            build(1,1,n,'a'+i);
    }
    int c,l,r,x;
    char ch;
    while(q--)
    {
        cin>>c;
        if(c==1)
        {
            cin>>x>>ch;
            if(a[x-1]!=ch)
            {
                update(1,1,n,x,a[x-1],ch);
                a[x-1]=ch;
            }
        }
        else
        {
            cin>>l>>r>>ch;
            cout<<query(1,1,n,l,r,ch)<<endl;
        }
    }
}

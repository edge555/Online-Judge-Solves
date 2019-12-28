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
#define N 10000
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
unordered_map<int,vector<int> >mp;
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
        return -1e9;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return max(p1,p2);
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        mp.clear();
        int i,n,q,k,l,r;
        sff(n,q);
        rep(i,n)
        {
            sf(k);
            ara[i]=k;
            mp[k].pb(i);
        }
        build(1,1,n);
        pf("Case %d:\n",t);
        while(q--)
        {
            sff(l,r);
            int mx=query(1,1,n,l+1,r+1);
            int ind1=lower_bound(all(mp[mx]),l+1)-mp[mx].begin();
            int ind2=upper_bound(all(mp[mx]),r+1)-mp[mx].begin();
            pf("%d\n",ind2-ind1);
        }
    }
}

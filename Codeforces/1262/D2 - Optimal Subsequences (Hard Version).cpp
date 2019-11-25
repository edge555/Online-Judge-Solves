#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

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
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type,less<int>, rb_tree_tag, tree_order_statistics_node_update>ordered_set;
ordered_set os;
int ara[N],ans[N];
struct query{
    int l,pos,ind;
}q[N];
bool comp(pi &a,pi &b)
{
    if(a.fi==b.fi)
        return a.se>b.se;
    return a.fi<b.fi;
}
bool comp2(query &a,query &b)
{
    if(a.l==b.l)
        return a.ind<b.ind;
    return a.l<b.l;
}
int main()
{
    int i,n,k;
    sf(n);
    vector<pi>vec;
    rep0(i,n)
    {
        sf(k);
        ara[i]=k;
        vec.pb({k,i});
    }
    sort(all(vec),comp);
    int m;
    sf(m);
    rep0(i,m)
    {
        sff(q[i].l,q[i].pos);
        q[i].ind=i;
    }
    sort(q,q+m,comp2);
    rep0(i,m)
    {
        while(os.size()<q[i].l)
            os.insert(vec[n-1-os.size()].se);
        int x=*os.find_by_order(q[i].pos-1);
        ans[q[i].ind]=ara[x];
    }
    rep0(i,m)
        pf("%d\n",ans[i]);
}

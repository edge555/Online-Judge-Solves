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
int ara[N],mn[N],mx[N],pos[N];
int main()
{
    int i,n,m,k;
    sff(n,m);
    vector<int>vec;
    rep0(i,m)
    {
        sf(k);
        vec.pb(k);
    }
    rep(i,n)
    {
        ara[i]=i;
        pos[i]=i;
        mx[i]=i;
        mn[i]=i;
    }
    rep0(i,m)
    {
        int cur=vec[i];
        int c=pos[cur];
        if(c!=1)
        {
            int x=ara[c-1];
            swap(pos[cur],pos[x]);
            swap(ara[c],ara[c-1]);
            mn[cur]=min(mn[cur],pos[cur]);
            mx[cur]=max(mx[cur],pos[cur]);
            mn[x]=min(mn[x],pos[x]);
            mx[x]=max(mx[x],pos[x]);
        }
    }
    rep(i,n)
        pf("%d %d\n",mn[i],mx[i]);
}
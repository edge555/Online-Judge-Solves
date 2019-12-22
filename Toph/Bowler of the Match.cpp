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
struct info
{
    ll o,m,r,w;
    info()
    {

    }
    info(ll _o,ll _m,ll _r,ll _w)
    {
        o=_o;
        m=_m;
        r=_r;
        w=_w;
    }
};
vector<info>vec;
bool comp(info a,info b)
{
    if(a.w==b.w)
    {
        if(a.r==b.r)
        {
            if(a.m==b.m)
            {
                return a.o<b.o;
            }
            else
                return a.m>b.m;
        }
        else
            return a.r<b.r;
    }
    else
        return a.w>b.w;
}
int main()
{
    ll i,n,o,m,r,w;
    sl(n);
    bool chk=false;
    rep0(i,n)
    {
        sc("%lld-%lld-%lld-%lld",&o,&m,&r,&w);
        if(!o && !m && !r && !w)
            chk=true;
        else
            vec.pb({o,m,r,w});
    }
    sort(all(vec),comp);
    rep0(i,sz(vec))
    {
        info x=vec[i];
        pf("%lld-%lld-%lld-%lld\n",x.o,x.m,x.r,x.w);
    }
    if(chk)
        puts("0-0-0-0");
}

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
#define pii pair<ll,ll>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
bool comp(pii a,pii b)
{
    return a.se>b.se;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n,k;
        sf(n);
        ll ara[2*n+1];
        mem(ara,0);
        vector<pi>vec,vec2;
        rep0(i,n+1)
        {
            sf(k);
            vec.pb({k,n-i});
        }
        rep0(i,n+1)
        {
            sf(k);
            vec2.pb({k,n-i});
        }
        rep0(i,n+1)
        {
            int x=vec[i].fi;
            int y=vec[i].se;
            rep0(j,n+1)
            {
                int xx=vec2[j].fi;
                int yy=vec2[j].se;
                ll a=x*xx;
                ll b=y+yy;
                ara[b]+=a;
            }
        }
        for(i=2*n;i>=0;i--)
            pf("%lld ",ara[i]);
    }
}

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
#define N 5005
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
int dp[N][101][101],n;
vector<pi>vec;
bool comp(pi a,pi b)
{
    if(a.fi==b.fi)
        return a.se>b.se;
    return a.fi>b.fi;
}
int func(int i,int x,int y)
{
    if(i>=n)
        return 0;
    if(dp[i][x][y]!=-1)
        return dp[i][x][y];
    int ans=0,ans2=0,ans3=0;
    int xx=vec[i].fi,yy=vec[i].se;
    if(x>xx && y>yy)
        ans=1+func(i+1,xx,yy);
    if(y>xx && x>yy)
        ans2=1+func(i+1,yy,xx);
    ans3=func(i+1,x,y);
    return dp[i][x][y]=max(ans3,max(ans,ans2));
}
int main()
{
    mem(dp,-1);
    int i,x,y;
    sf(n);
    rep0(i,n)
    {
        sff(x,y);
        if(x<y)
            swap(x,y);
        vec.pb({x,y});
    }
    sort(all(vec),comp);
    int res=func(0,200,200);
    pf("%d",res);
}

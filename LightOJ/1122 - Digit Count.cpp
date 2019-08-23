#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 11
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
vector<int>vec;
ll dp[N][N];
int n,m;
ll func(int ind,int ld)
{
    if(dp[ind][ld]!=-1)
        return dp[ind][ld];
    if(ind==n)
        return 1;
    ll i,ans=0;
    rep0(i,m)
    {
        if(!ld)
            ans+=func(ind+1,vec[i]);
        else
        {
            if(abs(vec[i]-ld)<=2)
                ans+=func(ind+1,vec[i]);
        }
    }
    return dp[ind][ld]=ans;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(m,n);
        vec.clear();
        int i,k;
        rep0(i,m)
        {
            sf(k);
            vec.pb(k);
        }
        mem(dp,-1);
        pf("Case %d: %lld\n",t,func(0,0));
    }
}

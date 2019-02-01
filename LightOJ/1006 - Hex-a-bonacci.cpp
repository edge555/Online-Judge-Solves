#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define MOD 10000007
#define fi first
#define se second
#define N 10001
#define mem(ara) memset(ara,-1,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dp[N];
int a,b,c,d,e,f,n;
int fn(int n)
{
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n==2)
        return c;
    if(n==3)
        return d;
    if(n==4)
        return e;
    if(n==5)
        return f;
    else if(dp[n]!=-1)
        return dp[n];
    else
    {
        dp[n]=((fn(n-1)%MOD)+(fn(n-2)%MOD)+(fn(n-3)%MOD)+(fn(n-4)%MOD)+(fn(n-5)%MOD)+(fn(n-6)%MOD))%MOD;
        return dp[n];
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        mem(dp);
        sfff(a,b,c);
        sfff(d,e,f);
        sf(n);
        int p=fn(n);
        pf("Case %d: %d\n",t,p%MOD);
    }
}

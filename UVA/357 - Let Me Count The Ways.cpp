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
#define N 30005
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
ll dp[6][N];
int n;
vector<int>vec={1,5,10,25,50};
ll func(int ind,int rem)
{
    if(ind>=5)
    {
        if(!rem)
            return 1;
        return 0;
    }
    if(dp[ind][rem]!=-1)
        return dp[ind][rem];
    ll x=func(ind+1,rem),y=0;
    if(rem-vec[ind]>=0)
        y=func(ind,rem-vec[ind]);
    return dp[ind][rem]=x+y;
}
int main()
{
    mem(dp,-1);
    while(~sf(n))
    {

        ll p=func(0,n);
        if(p==1)
            pf("There is only 1 way to produce %d cents change.\n",n);
        else
            pf("There are %lld ways to produce %d cents change.\n",p,n);
    }
}

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
#define N 100000005
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
bitset<N>mark;
vector<ll>prime;
void sieve()
{
    mark.set();
    mark[0]=false;
    mark[1]=false;
    int i,j;
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    prime.pb(2);
    for(i=3;i<=N;i++)
    {
        if(mark[i])
            prime.pb(i);
    }
}
ll power(ll a,ll b)
{
    if(!b)
        return 1;
    if(b==1)
        return a;
    ll ans=1;
    while(b--)
        ans*=a;
    return ans;
}
ll SOD(ll n)
{
    ll sum=1,i,cnt;
    for(i=0;i<prime.size() && i*i<n;i++)
    {
        if(n%prime[i]==0)
        {
            cnt=0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
            }
            sum*=(power(prime[i],cnt+1)-1)/(prime[i]-1);
        }
    }
    if(n>1)
        sum*=(n+1);
    return sum;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll n;
        sl(n);
        pf("%lld\n",SOD(n)-n);
    }
}

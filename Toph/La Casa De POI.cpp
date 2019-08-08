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
#define N 100005
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
unordered_map<ll,bool>mp;
ll lim,sum=0;
void div(ll n)
{
    ll i,x,y;
    if(n&1)
    {
        for(i=1;i*i<=n;i+=2)
        {
            if(i>lim)
                return;
            if(n%i!=0)
                continue;
            mp[i]=true;
            x=n/i;
            if(x<=lim)
                mp[x]=true;
        }
    }
    else
    {
        for(i=1;i*i<=n;i++)
        {
            if(i>lim)
                return;
             if(n%i!=0)
                continue;
            mp[i]=true;
            x=n/i;
            if(x<=lim)
                mp[x]=true;
        }
    }
}
void divv(ll n)
{
    ll i,x,y;
    if(n&1)
    {
        for(i=1;i*i<=n;i+=2)
        {
            if(i>lim)
                return;
             if(n%i!=0)
                continue;
            if(mp[i])
                sum+=i;
            x=n/i;
            if(x<=lim && i!=x && mp[x])
                sum+=x;
        }
    }
    else
    {
        for(i=1;i*i<=n;i++)
        {
            if(i>lim)
                return;
             if(n%i!=0)
                continue;
            if(mp[i])
                sum+=i;
            x=n/i;
            if(x<=lim && i!=x && mp[x])
                sum+=x;
        }
    }
}
int main()
{
    ll a,b;
    sll(a,b);
    lim=__gcd(a,b);
    if(a>b)
    {
        div(b);
        divv(a);
        pf("%lld",sum);
    }
    else
    {
        div(a);
        divv(b);
        pf("%lld",sum);
    }
}

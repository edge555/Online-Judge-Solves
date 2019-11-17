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
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.in","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
ll ans=-1;
int dig(ll n)
{
    return log10(n)+1;
}
ll rev(ll n)
{
    ll k=0;
    while(n)
    {
        k*=10;
        k+=n%10;
        n/=10;
    }
    return k;
}
int sorted(ll n)
{
    vector<int>vec;
    while(n!=0)
    {
        vec.pb(n%10);
        n/=10;
    }
    int i;
    rep(i,vec.size()-1)
    {
        if(vec[i]>vec[i-1])
            return false;
    }
    return true;
}
void func(ll n,ll p)
{
    if(!n)
    {
        if(!sorted(p))
            return;
        ans=max(ans,p);
        return;
    }
    if(dig(n)==1)
    {
        if(n)
        {
            p*=10;
            p+=n;
        }
        if(!sorted(rev(p)))
            return;
        ans=max(ans,rev(p));
        return;
    }
    if(n%10==0)
        n--;
    if(n%10==9)
    {
        ll x=p*10+9;
        n/=10;
        func(n,x);
    }
    else
    {
        ll x=(p*10)+(n%10);
        func(n/10,x);
        ll y=p*10+9;
        n/=10;
        n--;
        func(n,y);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll n;
        sl(n);
        ans=-1;
        func(n,0);
        pf("Case #%d: %lld\n",t,ans);
    }
}

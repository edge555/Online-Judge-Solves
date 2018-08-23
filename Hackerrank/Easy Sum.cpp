#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long ll;
using namespace std;
ll sum(ll k)
{
    return (k*(k+1))/2;
}
int main()
{
    int tc;
    ll n,m,ans;
    sf(tc);
    while(tc--)
    {
       cin>>n>>m;
       ans=(n/m)*sum(m-1);
       if(n%m!=0)
       {
           ll p=n%m;
           ans+=sum(p);
       }
       cout<<ans<<endl;
    }
}

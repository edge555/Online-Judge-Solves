#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<long long int,long long int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
ll mn,mx,n;
vector<pi>vec;
ll calcmin(ll p)
{
    ll a=abs(vec[p-1].fi-vec[p].fi);
    a=min(a,abs(mn-vec[p].fi));
    a=min(a,abs(mx-vec[p].fi));
    a=min(a,abs(vec[p+1].fi-vec[p].fi));
    return a;
}
ll calcmax(ll p)
{
    ll a=abs(vec[p].fi-vec[p-1].fi);
    a=max(a,abs(mn-vec[p].fi));
    a=max(a,abs(mx-vec[p].fi));
    a=max(a,abs(vec[p+1].fi-vec[p].fi));
    return a;
}
int main()
{
    ll i,k;
    sf(n);
    mn=INT_MAX,mx=INT_MIN;

    rep0(i,n)
    {
        sf(k);
        vec.pb(make_pair(k,i));
        mn=min(mn,k);
        mx=max(mx,k);
    }
    rep0(i,n)
    {
        if(i==0)
            cout<<abs(vec[1].fi-vec[0].fi)<<" "<<abs(mx-vec[0].fi)<<endl;
        else if (i==n-1)
            cout<<abs(mx-vec[n-2].fi)<<" "<<abs(mx-mn)<<endl;
        else
            cout<<calcmin(vec[i].se)<<" "<<calcmax(vec[i].se)<<endl;

    }
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool comp(ll a,ll b)
{
    return a>b;
}
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        ll i,n,k,r;
        sff(n,r);
        vector<int>vec;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        sort(all(vec),comp);
        ll p=vec[r-1];
        for(i=r;;i++,r++)
        {
            if(vec[i]!=p || i==n)
                break;
        }
        cout<<r<<endl;
    }
}

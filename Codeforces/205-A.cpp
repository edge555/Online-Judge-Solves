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
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    ll n,i,k;
    sf(n);
    map<ll,int>mp;
    map<ll,int>::iterator it;
    vector<ll>vec;
    while(n--)
    {
        sf(k);
        vec.pb(k);
        mp[k]++;
    }
    it=mp.begin();
    if(it->se>1)
    {
        puts("Still Rozdil");
        return 0;
    }
    rep0(i,vec.size())
    {
        if(vec[i]==it->fi)
        {
            cout<<i+1;
            return 0;
        }
    }
}

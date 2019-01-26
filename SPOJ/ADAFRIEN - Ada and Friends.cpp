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
typedef long long int ll;
using namespace std;
bool func(pair<string,ll>a,pair<string,ll>b)
{
    return a.second>b.second;
}
int main()
{
    map<string,ll>mp;
    map<string,ll>::iterator it;
    ll a,b,n,p=0,i;
    sff(a,b);
    string s;
    while(a--)
    {
        cin>>s>>n;
        if(mp.find(s)==mp.end())
            mp[s]=n;
        else
        {
            ll k=mp[s];
            k+=n;
            mp[s]=k;
        }
    }
    vector<pair<string,ll> >vec;
    for(it=mp.begin();it!=mp.end();it++)
        vec.pb(make_pair(it->first,it->second));
    sort(vec.begin(),vec.end(),func);

    for (i=0;i<vec.size();i++)
    {
        p+=vec[i].second;
        b--;
        if(b==0)
            break;
    }
    cout<<p;
}

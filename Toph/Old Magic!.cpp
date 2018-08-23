#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
    ll k;
    cin>>k;
    vector<pair<string,ll>>vec;

    string a;
    ll p,n;
    while(k--)
    {
        cin>>a>>n;
        vec.push_back(pair<string,ll>(a,n));

    }
    cin>>p;
    for(ll i=vec.size()-1;i>=0;i--)
    {
        if(vec[i].first=="multiply")
            p/=vec[i].second;
        else if(vec[i].first=="add")
            p-=vec[i].second;
        else if(vec[i].first=="subtract")
            p+=vec[i].second;
        else if(vec[i].first=="divide")
            p*=vec[i].second;
    }
    cout<<p;
}

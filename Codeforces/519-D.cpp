#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    map<ll,int>mp[26];
    string s;
    int ara[26],i;
    for(i=0;i<26;i++)
        cin>>ara[i];
    cin>>s;

    ll ans=0,cnt=0;
    for(i=0;i<s.size();i++)
    {
        ll b=s[i]-'a';
        ans+=mp[b][cnt];
        cnt+=ara[b];
        mp[b][cnt]++;
    }
    cout<<ans;
}

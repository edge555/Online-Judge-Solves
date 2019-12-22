#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;

int main()
{
    map<int,int>mp;
    map<int,int>::iterator it;
    int n,a,mx=-1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(mp.find(a)==mp.end())
            mp[a]=1;
        else
            mp[a]++;
    }
    for (it=mp.begin();it!=mp.end();it++)
        mx=max(mx,it->second);
    cout<<mx<<endl;
}

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
map<char,int>mp;
map<char,int>::iterator it;
int main()
{
    int n;
    sf(n);

    while(n--)
    {
        mp.clear();
        int i,k;
        for (i='a';i<='z';i++)
        {
            sf(k);
            mp[i]=k;
        }
        string a="";
        cin>>a;
        ll sum=0;
        for (i=0;i<a.size();i++)
        {
            it=mp.find(a[i]);
            if(it!=mp.end())
                mp.erase(it);
        }
        for (it=mp.begin();it!=mp.end();it++)
            sum+=it->second;

        pf("%lld\n",sum);
    }
}

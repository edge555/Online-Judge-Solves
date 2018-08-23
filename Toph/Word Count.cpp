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
    map<string,int>mp;
    map<string,int>::iterator it;
    string a;
    while(getline(cin,a))
    {
        int i;

        for (i=0;i<a.size();)
        {
            if(isalpha(a[i]))
            {
                string b;
                while(isalpha(a[i]))
                {
                    b.pb(a[i]);
                    i++;
                }
                mp[b]++;
            }
            else
                i++;

        }
    }
    string res;
    int mx=-1;
    for (it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>mx)
        {
            mx=it->second;
            res=it->first;
        }
    }
    cout<<res<<endl;
}

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
    int tc=1;
    while(1){
    int n,q,k;
    sff(n,q);
    if(n==0 && q==0)
        break;

    multiset<int>st;
    multiset<int>::iterator it;
    while(n--)
    {
        cin>>k;
        st.insert(k);
    }
    int j=1;
    map<int,int>mp;
    map<int,int>::iterator it2;
    for(it=st.begin();it!=st.end();it++,j++)
    {
        if(mp.find(*it)==mp.end())
            mp[*it]=j;
    }
    pf("CASE# %d:\n",tc++);
    while(q--)
    {
        cin>>k;
        it2=mp.find(k);
        if(it2==mp.end())
            cout<<k<<" not found"<<endl;
        else
            cout<<it2->first<<" found at "<<it2->second<<endl;
    }
    }
}

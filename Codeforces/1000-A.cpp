#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;

int main()
{
    int n,i,cnt=0;
    sf(n);
    multiset<string>st;
    multiset<string>::iterator it;
    string a;
    for (i=0;i<n;i++)
    {
       cin>>a;
       st.insert(a);
    }
    for (i=0;i<n;i++)
    {
       cin>>a;
       if(st.find(a)==st.end())
            cnt++;
        else
        {
            it=st.find(a);
            st.erase(it);
        }
    }
    pf("%d\n",cnt);
}

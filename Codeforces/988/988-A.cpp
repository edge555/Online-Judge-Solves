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
    int a,b,i,k;
    sff(a,b);
    map<int,int>mp;
    map<int,int>::iterator it;
    for (i=0;i<a;i++)
    {
        cin>>k;
        mp[k]=i+1;
    }
    if(mp.size()<b)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        it=mp.begin();
        while (b--)
        {
            cout<<it->second;
            it++;
            if(b>0)
                cout<<" ";
        }

    }
}

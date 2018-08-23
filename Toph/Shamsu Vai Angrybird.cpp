#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    ll extra=0,n,d,q,a,b,x,k,l;
    sff(n,q);
    sf(d);
    vector<pair<int,int>>vec;
    while(n--)
    {
        sff(a,b);
        k=a+extra;
        k=(k>d)?d:k;
        vec.push_back(make_pair(k,b));
        extra=k-b;
        extra=(extra<0)?0:extra;
    }

    while(q--)
    {
        cin>>l;
        cout<<vec[l-1].first;
        if(vec[l-1].first>=vec[l-1].second)
            pf(" SHAMSU VAI Zindabad\n");
        else
            pf(" SHAMSU VAI Angrybird\n");
    }
}

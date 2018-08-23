#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    ll a,b,i;
    sff(a,b);

    if (a%2==0 && b%2==0)
        cout<<((b-a)/2)<<endl;
    else
        cout<<((b-a)/2)+1<<endl;

}

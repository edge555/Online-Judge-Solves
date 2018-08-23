#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long int ll;
using namespace std;

int main()
{
    ll n,a,b;
    sc("%lld",&n);
    for (int i=1;i<=n;i++)
    {
        ll s=0;
        sc("%lld %lld",&a,&b);

        s+=(a*(a-1)*(a-2))/6;
        s+=(b*(b-1)*(b-2))/6;

        pf("Case %d: %lld\n",i,s);
    }
}

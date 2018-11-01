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
    long long int n,ara[20],mx,prod,cs=1,i,j;
    while(scanf("%lld",&n)==1)
    {
        mx=0;
        for(i=0;i<n;i++)
            scanf("%lld",&ara[i]);
        for(i=0;i<n;i++)
        {
            prod=1;
            for(j=i;j<n && prod!=0;j++)
            {
                prod*=ara[j];
                if(prod>mx)
                    mx=prod;
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",cs++,mx);
    }
}

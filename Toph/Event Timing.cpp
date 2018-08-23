
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
    int n,i;
    sf(n);
    for (i=1;i<=n;i++)
    {
        int a,b,c,d;
        sff(a,b);
        sf(c);
        d=(b/c)+1;

        pf("Case %d: %d\n",i,a+(d*c));
    }
}

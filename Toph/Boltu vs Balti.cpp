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
typedef long long ll;
using namespace std;

int main()
{
    long x,y,sum1=0,sum2=0,a,b;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        if(a>b)
        {
            x=a;
            y=b;
        }
        else if(b>=a)
        {
            x=b;
            y=a;
        }
        y--;

        sum1=y*(y+1)/2;
        sum2=x*(x+1)/2;

        pf("Sum of %ld to %ld is -> %ld;\n",y+1,x,sum2-sum1);
    }

}

#include <bits/stdc++.h>

#define pi 3.1416
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %0.2lf\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    int n,i,tc=1;
    sf(n);
    while (tc<=n)
    {
        double r,arr,arc,kk;
        cin>>r;
        arr=8*r*r;
        arc=pi*r*r;
        kk=arr-(2*arc);
        cspf(kk);
    }
}

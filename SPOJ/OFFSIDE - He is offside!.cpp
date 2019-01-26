
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
    int a,b,i;
    while(1)
    {
        sff(a,b);
        if(a==0 && b==0)
            break;
        int ara[a+1],ara2[b+1];
        for (i=0;i<a;i++)
            cin>>ara[i];
        for (i=0;i<b;i++)
            cin>>ara2[i];
        sort(ara,ara+a);
        sort(ara2,ara2+b);
        if(ara[0]<ara2[1])
            pf("Y\n");
        else
            pf("N\n");
    }
}

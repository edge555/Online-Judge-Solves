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
    int n;
    sf(n);
    while (n--)
    {
        int k,i;
        sf(k);
        bool chk=true;
        for (i=2;i<=k/2;i++)
        {
            if (k%i==0)
            {
                chk=false;
                break;
            }
        }
        if(chk==false)
            pf("0\n");
        else if(chk==true)
            pf("1\n");
    }
}

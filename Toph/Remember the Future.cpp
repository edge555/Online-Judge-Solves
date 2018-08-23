#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n,i;
    in1(n);
    for (i=1;i<=n;i++)
    {
        int k,j,p;
        in1(k);
        int mx=0;
        for (j=0;j<k;j++)
        {
            in1(p);
            if(p<0)
                p*=-1;
            mx=max(mx,p);
        }

        pf("Case %d: %d\n",i,mx);
    }
}

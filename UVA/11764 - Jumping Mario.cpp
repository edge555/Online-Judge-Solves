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
        int m,t;
        in1(m);
        int j,h=0,l=0;
        cin>>t;
        m--;
        while (m--)
        {
            cin>>j;
            if (j>t)
                h++;
            else if (t>j)
                l++;
            t=j;
        }
        pf("Case %d: %d %d\n",i,h,l);
    }
}

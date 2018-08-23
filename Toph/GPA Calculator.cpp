#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n;
    in1(n);
    for (int i=1;i<=n;i++)
    {
        int k,l;
        float sum=0;
        in1(k);
        l=k;
        while (k--)
        {
            float p;
            sc("%f",&p);
            sum+=p;
        }
        pf("Case %d: %0.3f\n",i,sum/l);
    }
}

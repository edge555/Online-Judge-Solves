#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%lf",&num)
#define in2(num1,num2) scanf("%lf %lf",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    double a,b,p,sum=0;
    in2(a,b);
    while (a--)
    {
        in1(p);
        sum+=p;
    }
    pf ("%0.0lf\n",ceil(sum/b));
}

#include <bits/stdc++.h>
using namespace std;
double area(double a)
{
    return 0.25*acos(-1)*a*a;
}
int main()
{
    double a,r1,r2,r3,r4;
    while(scanf ("%lf %lf %lf %lf %lf",&a,&r1,&r2,&r3,&r4)==5)
    {
        printf("%0.3lf\n",a*a-area(r1)-area(r2)-area(r3)-area(r4));
    }
}

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    double x,y,z,t,c,C,p,P,r,R;
    {
        while (scanf ("%lf %lf %lf",&x,&y,&z)!=EOF)
        {
        P=x+y+z;
        p=P/2;
        t=sqrt(p*(p-x)*(p-y)*(p-z));
        r=2*t/P;
        c=pi*r*r;
        R=(x*y*z)/sqrt((x+z+y)*(x+y-z)*(x-y+z)*(-x+z+y));
        C=pi*R*R;

        printf ("%.4lf %.4lf %.4lf\n",C-t,t-c,c);
        }
    }
    return 0;
}

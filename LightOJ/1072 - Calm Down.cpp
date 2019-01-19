#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main ()
{
    double r,R,n,m;
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        cin>>R>>n;
        r=(R*sin(PI/n))/(1+sin(PI/n));
        printf ("Case %d: %.10lf\n",i,r);
    }
}

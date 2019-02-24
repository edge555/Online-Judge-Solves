#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double i,j,k,m,n,a,b,c;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        k=(a+b)/3.0;
        j=(a-k)/(k*1.0);
        printf ("%0.0lf\n",c*j);
    }
}

#include <bits/stdc++.h>
int main ()
{
    float a,b,c;
    int n,m=1;

    scanf ("%d",&n);
    if (n>=0 && n<=100)
    {

    while (m<=n)
    {
        scanf ("%f %f",&a,&b);
        if (a>=0 && b>=0 && b<=100)

        {
        c=a+(b/1.8);

        printf ("Case %d: %0.2f\n",m,c);
        m++;
        }
    }
    }
    return 0;
}

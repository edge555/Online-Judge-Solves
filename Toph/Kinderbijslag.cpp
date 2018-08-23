#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        int a,b,c;
        scanf ("%d %d %d",&a,&b,&c);
        printf ("Case %d: ",i);
        a*100>=c*b?printf ("YES\n"):printf ("NO\n");
    }
}

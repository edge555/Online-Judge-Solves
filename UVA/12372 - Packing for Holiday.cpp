#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a<=20 && b<=20 && c<=20)
            printf ("Case %d: good\n",i);
        else
            printf ("Case %d: bad\n",i);
    }
}

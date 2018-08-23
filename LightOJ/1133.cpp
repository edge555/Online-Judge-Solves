#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for (i=1;i<=t;i++)
    {
        int n,m,j,ara[10000],k;
        cin>>n>>m;
        for (j=0;j<n;j++)
            cin>>ara[j];

        for (k=0;k<m;k++)
        {
        char c;
        cin>>c;
        if (c=='R')
            reverse(ara,ara+n);

        else if (c=='S')
        {
            int s;
            cin>>s;
            for (j=0;j<n;j++)
                ara[j]=ara[j]+s;

        }
        else if (c=='M')
        {
            int m;
            cin>>m;
            for (j=0;j<n;j++)
                ara[j]=ara[j]*m;

        }
        else if (c=='D')
        {
            int d;
            cin>>d;
            for (j=0;j<n;j++)
                ara[j]=ara[j]/d;

        }
        else if (c=='P')
        {
            int x,y,temp;
            cin>>x>>y;
            swap(ara[x],ara[y]);
        }
        }
        printf ("Case %d:\n",i);
        for (j=0;j<n;j++)
        {
            cout<<ara[j];
            if (j<n-1)
                printf (" ");
        }
        cout<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,ara[1000],i;
    cin>>n;
    for (i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for (i=0;i<n;i++)
    {
        cout<<ara[i];
        if (i<n-1);
        cout<<" ";
    }
    cout<<endl;
}

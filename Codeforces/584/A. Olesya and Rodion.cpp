#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1],i,k=1,high=0;
    for (i=0;i<n;i++)
        cin>>ara[i];
    for (i=0;i<n-1;i++)
    {
        if (ara[i]>ara[i+1])
        {
            if (k>high)
                high=k;
            k=1;
        }
        else
            k++;
    }
    if (k>high)
        high=k;
    cout<<high<<endl;
}

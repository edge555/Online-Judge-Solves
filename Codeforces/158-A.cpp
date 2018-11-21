#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int i,ara[100000];
    for (i=0;i<n;i++)
        cin>>ara[i];
    
    int k=ara[p-1],cnt=0;
    for (i=0;i<n;i++)
    {
        if (ara[i]>=k && ara[i]>0)
            cnt++;
    }
    cout<<cnt;
}

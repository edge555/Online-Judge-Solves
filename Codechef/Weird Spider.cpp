#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,sum=0,n,cnt=0,t;
    cin>>t;
    for (j=1;j<=t;j++)
    {
    cin>>n;
    for (i=1;sum<=n-1;i+=9)
    {
        sum+=i;
        cnt++;
    }
    printf ("Case #%lld: %lld\n",j,cnt);
    cnt=0;
    sum=0;
    }
    return 0;

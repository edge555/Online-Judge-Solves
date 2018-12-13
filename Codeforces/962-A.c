#include <bits/stdc++.h>
using namespace std;
int ara[10000000];
int main()
{
    long int n,i,sum;
    cin>>n;
    for (i=0,sum=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    int sum2=0,cnt=0;
    double x;
    x=sum/2.0;
    for (i=0;!(sum2>=x);i++)
    {
        sum2+=ara[i];
        cnt++;
    }
    cout<<cnt;
}

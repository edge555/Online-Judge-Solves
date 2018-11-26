#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,cnt=0,x;
    cin>>n>>x;
    for (i=1;i<=n;i++)
    {
        if (x%i==0 && x/i<=n)
            cnt++;
    }
    cout<<cnt<<endl;
}

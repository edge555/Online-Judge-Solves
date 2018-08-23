#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,a,b,n;
    cin>>n;
    for (k=1;k<=n;k++,cout<<endl)
    {
        cin>>a>>b;
        printf("Case %lld: ",k);
        (a>b)?cout<<a-b+2:cout<<b-a+2;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        long long ans=(n*(n+2)*(2*n+1)/8);
        cout<<ans<<endl;
    }
}

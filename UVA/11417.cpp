#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cin>>n;
        if (n==0)
            break;
        int i,j,sum=0;
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
                sum+=__gcd(i,j);
        cout<<sum<<endl;
    }

}

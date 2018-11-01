#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,k=0;
    while (1)
    {
        scanf ("%lld",&n);
        if (n==0)
            break;
        while (1)
        {
            while (n!=0)
            {
                sum+=n%10;
                n/=10;
            }

            if (sum<=9)
                break;
            else
                n=sum;
                sum=0;
        }
        cout<<sum<<endl;
        sum=0;
    }
}

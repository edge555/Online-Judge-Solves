
#include <bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    long long i=2;
    if (n==1)
        return false;
    else if (n==2)
        return true;
    else
    {
        while(i<=(long long)(sqrt(n)+1))
        {
            if (n%i==0)
                return false;
        i++;
        }
    }
    return true;
}
int main()
{
    long long t,a,b,i;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        for (i=a;i<=b;i++)
        {
            if (prime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"PERFECTION OUTPUT"<<endl;
    while (1)
    {
        int n;
        cin>>n;
        if (n==0)
            break;
        int i,sum=0;
        for (i=1;i<=n/2;i++)
        {
            if (n%i==0)
                sum+=i;
        }
        if (sum==n)
            printf ("%5d  PERFECT\n",n);
        else if (sum<n)
            printf ("%5d  DEFICIENT\n",n);
        else
            printf ("%5d  ABUNDANT\n",n);
    }
    cout<<"END OF OUTPUT"<<endl;
}

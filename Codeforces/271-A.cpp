#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=n+1;;i++)
    {
        int k,freq[10],m;
        for (k=0;k<10;k++)
            freq[k]=0;
        m=i;
        while(m!=0)
        {
            freq[m%10]++;
            m/=10;
        }
        int cnt=0;
        for (k=0;k<10;k++)
        {
           if (freq[k]==1)
            cnt++;
        }
        if (cnt==4)
        {
            cout<<i;
            return 0;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i,cnt0=0;
    string a="",b="";
    cin>>n;
    getchar();
    cin>>a;
    for (i=0;i<n;i++)
    {
        if (a[i]=='1')
            cnt++;
        else
            cnt0++;
    }
    if (cnt0==n)
        cout<<"0";
    else if (cnt==n)
        cout<<"1";
    else
    {
        b.push_back('1');
        for (i=0;i<cnt0;i++)
            b.push_back('0');
        cout<<b;
    }
}

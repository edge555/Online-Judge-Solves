#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=50,cnt=0;
    cin>>n;
    while (n--)
    {
        int r;
        cin>>r;
        if (r!=temp)
            cnt++;
        temp=r;
    }
    cout<<cnt<<endl;
}

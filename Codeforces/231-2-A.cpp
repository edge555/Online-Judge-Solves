#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if ((a+b+c)>=2)
            cnt++;
    }
    cout<<cnt<<endl;
}

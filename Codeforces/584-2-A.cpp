#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a="";
    cin>>n>>a;
    if (n==1 && a.size()==2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        while (a.size()!=n)
            a.push_back('0');
    }
    cout<<a<<endl;
}

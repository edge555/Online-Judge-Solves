#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a="",b="",res="";
    getline (cin,a);
    getline (cin,b);

    int i;
    for (i=0;i<a.size();i++)
    {
        if (a[i]!=b[i])
            res.push_back('1');
        else
            res.push_back('0');
    }
    cout<<res<<endl;
}

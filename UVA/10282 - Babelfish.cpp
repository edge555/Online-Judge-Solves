#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string a="",b="",ara="",ara2="";
    map<string,string>mp;
    map<string,string>::iterator it;
    getline(cin,ara);
    while (ara!="")
    {
        stringstream st(ara);
        st>>a>>b;
        mp.insert(make_pair(b,a));
        getline(cin,ara);
    }
    while (cin>>ara2)
    {
        it=mp.find(ara2);
        if (it==mp.end())
            cout<<"eh"<<endl;
        else
            cout<<it->second<<endl;
    }
}

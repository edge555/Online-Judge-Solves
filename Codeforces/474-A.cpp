#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a="qwertyuiop";
    string b="asdfghjkl;";
    string c="zxcvbnm,./";
    string d="";

    int i;
    map<char,char>mpl;
    map<char,char>mpr;
    map<char,char>::iterator it;

    for (i=0;i<a.size()-1;i++)
        mpl.insert(make_pair(a[i],a[i+1]));

    for (i=1;i<a.size();i++)
        mpr.insert(make_pair(a[i],a[i-1]));

    for (i=0;i<b.size()-1;i++)
        mpl.insert(make_pair(b[i],b[i+1]));

    for (i=1;i<b.size();i++)
        mpr.insert(make_pair(b[i],b[i-1]));

    for (i=0;i<c.size()-1;i++)
        mpl.insert(make_pair(c[i],c[i+1]));

    for (i=1;i<b.size();i++)
        mpr.insert(make_pair(c[i],c[i-1]));

    char ch;
    cin>>ch;
    getchar();
    getline(cin,d);
    if (ch=='R')
    {
        for (i=0;i<d.size();i++)
        {
            it=mpr.find(d[i]);
            cout<<it->second;
        }
        cout<<endl;
    }
    else
    {
        for (i=0;i<d.size();i++)
        {
            it=mpl.find(d[i]);
            cout<<it->second;
        }
        cout<<endl;
    }
}

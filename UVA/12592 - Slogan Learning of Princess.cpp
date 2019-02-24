#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string a="",b="";
    map<string,string>mp;
    map<string,string>:: iterator it,it2;
    int n;
    cin>>n;
    getchar();
    while (n--)
    {
        getline(cin,a);
        getline(cin,b);
        mp.insert(make_pair(a,b));
    }
    int m;
    cin>>m;
    getchar();
    {
        while (m--)
        {
            getline(cin,a);
            it2=mp.find(a);
            for (it=mp.begin();it!=mp.end();it++)
            {
                if (*it==*it2)
                    cout<<it->second<<endl;
            }
        }
    }
    return 0;
}

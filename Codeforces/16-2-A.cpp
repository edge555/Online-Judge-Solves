#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l=0;
    string ara="";
    char ch='d';
    cin>>n>>m;
    getchar();
    while (n--)
    {
        getline(cin,ara);
        if (ara[0]==ch)
            l=1;
        ch=ara[0];
        set<char>st;
        int i;
        for (i=0;i<ara.size();i++)
        {
            st.insert(ara[i]);
        }
        if (st.size()!=1)
            l=1;
    }
    if (l==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

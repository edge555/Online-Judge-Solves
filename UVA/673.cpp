#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int m;
    scanf ("%d\n",&m);
    while (m--)
    {
        string x;
        getline (cin,x);
        stack<char>st;
        int i;
        for (i=0;i<x.size();i++)
        {
            if (!st.empty() && x[i]==')' && st.top()=='(')
                st.pop();
            else if (!st.empty() && x[i]==']' && st.top()=='[')
                st.pop();
            else
                st.push(x[i]);
        }

        if (st.empty())
            cout<<"Yes"<<endl;
        else if (!st.empty())
            cout<<"No"<<endl;
    }
}

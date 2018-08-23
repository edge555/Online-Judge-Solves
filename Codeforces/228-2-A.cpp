#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    for (int i=0;i<4;i++)
    {
        int k;
        cin>>k;
        st.insert(k);
    }
    cout<<4-st.size()<<endl;
}

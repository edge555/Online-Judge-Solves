#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,v,i;
    string w;
    map<string,int>mp;

    while(scanf ("%d %d",&m,&n)==2)
    {
        for (i=0;i<m;i++)
        {
            cin>>w>>v;
            mp.insert(make_pair(w,v));
        }

        for (i=0;i<n;i++)
        {
            int sum=0;
            while(cin>>w && w.compare(".")!= 0)
                sum+=mp[w];
            
            cout<<sum<<endl;
        }
    }
}

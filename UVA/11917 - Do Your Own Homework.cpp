#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,m;
    string a="",b="";
    map<string,int>mp;
    map<string,int>::iterator it,it2;
    cin>>n;

    for (i=1;i<=n;i++)
    {
        mp.clear();
        int k,p,l;
        cin>>m;
        while (m--)
        {
            cin>>a>>k;
            mp.insert(make_pair(a,k));
        }

        cin>>p>>b;
        it2=mp.find(b);
        int r;
        for (it=mp.begin();it!=mp.end();it++)
        {
            if (*it==*it2)
                r=it->second;
        }
        if (r<=p && r>0)
            printf ("Case %d: Yesss\n",i);
        else if (r>p && r<=p+5 && r>0)
            printf ("Case %d: Late\n",i);
        else
            printf ("Case %d: Do your own homework!\n",i);
        r=0;
    }
    return 0;
}

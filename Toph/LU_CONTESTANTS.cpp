#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc,j;
    sf(tc);
    for (j=1;j<=tc;j++)
    {
        map<string,int>mp;
        map<string,int>::iterator itm;
        int n,k,mx=-1;
        sf(n);
        string a,res;
        while(n--)
        {
            cin>>a>>k;
            mp.insert(make_pair(a,k));
            mx=max(mx,k);
        }
        set<string>st;
        set<string>::iterator it;
        for (itm=mp.begin();itm!=mp.end();itm++)
        {
            if(itm->second==mx)
                st.insert(itm->first);
        }
        pf("Case %d: ",j);
        it=st.begin();
        cout<<*it;
        if(mx>=1 && mx<=1199)
            pf(" is Newbie!.\n");
        else if(mx>=1200 && mx<=1399)
            pf(" is Pupil!.\n");
        else if(mx>=1400 && mx<=1599)
            pf(" is Specialist!.\n");
        else
            pf(" is Expert!.\n");
    }
}

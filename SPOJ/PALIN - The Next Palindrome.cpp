#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;

        ll sz=s.size()/2;
        if(s.size()%2==0)
            sz--;
        bool f=false;

        ll j=sz+1;
        ll id = sz;
        if(s.size()%2)
            id--;

        while(s[j]==s[id] && id>=0 && j<s.size())
        {
            j++;
            id--;
        }

        if(s[j]<s[id] && id>=0 && j<s.size())
            f=true;

        if(f==true)
        {
            for(ll i=0;i<=sz;i++)
                cout<<s[i];
            if(s.size()%2)
                sz--;

            for(ll i=sz;i>=0;i--)
                cout<<s[i];

            cout<<endl;
            continue;
        }

        f=false;
        for(ll i=sz;i>=0;i--)
        {
            if(s[i]<'9')
            {
                f=true;
                s[i]++;
                id=i;
                break;
            }
        }

        if(f==false)
        {
            cout<<"1";
            for(ll i=0;i<s.size()-1;i++)
                cout<<"0";
            cout<<"1"<<endl;
        continue;
        }

        for(ll i=id+1;i<=sz;i++)
            s[i]='0';

        for(ll i=0;i<=sz;i++)
            cout<<s[i];

        if(s.size()%2)
            sz--;

        for(ll i=sz;i>=0;i--)
            cout<<s[i];

        cout<<endl;
    }
}

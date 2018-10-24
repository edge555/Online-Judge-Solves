#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

string pali(string s)
{
    string a="";
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
            a+=s[i];
        if(s.size()%2)
            sz--;

        for(ll i=sz;i>=0;i--)
            a+=s[i];

        return a;
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
        a.pb('1');

        for(ll i=0;i<s.size()-1;i++)
        {
            a.pb('0');
        }
        a.pb('1');
        return a;
    }

    for(ll i=id+1;i<=sz;i++)
        s[i]='0';

    for(ll i=0;i<=sz;i++)
        a+=s[i];

    if(s.size()%2)
        sz--;

    for(ll i=sz;i>=0;i--)
        a+=s[i];
    return a;
}

int main()
{
    ll t;
    string s,a,b;

    while(cin>>t>>s)
    {
        while(t--)
        {
            b=pali(s);
            cout<<b<<endl;
            s=b;
        }
    }
}

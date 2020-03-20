#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
string bin(int n)
{
    string s="";
    while(n)
    {
        s+=(n%2)+'0';
        n/=2;
    }
    return s;
}
int num(string s)
{
    int x=0,now=1,i;
    for(i=sz(s)-1;i>=0;i--)
    {
        if(s[i]=='1')
            x+=now;
        now*=2;
    }
    return x;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k,x;
        sff(n,x);
        vector<int>vec;
        unordered_map<int,bool>mp;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
            mp[k]=true;
        }
        int xorr=vec[0];
        rep(i,n-1)
            xorr^=vec[i];
        string a=bin(xorr);
        string b=bin(x);
        int mx=max(sz(a),sz(b));
        while(a.size()!=mx)
            a+='0';
        while(b.size()!=mx)
            b+='0';
        reverse(all(a));
        reverse(all(b));
        string c;
        for(i=b.size();i>=0;i--)
        {
            if(b[i]=='1')
            {
                if(a[i]=='1')
                    c+='0';
                else
                    c+='1';
            }
            else if(b[i]=='0')
            {
                if(a[i]=='0')
                    c+='0';
                else
                    c+='1';
            }
        }
        reverse(all(c));
        int y=num(c);
        if(mp[y])
            y=-1;
        pf("Case %d: %d\n",t,y);
    }
}

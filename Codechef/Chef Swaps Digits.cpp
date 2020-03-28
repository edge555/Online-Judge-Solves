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
#define pi pair<string,string>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int num(string s)
{
    int n=0,i;
    rep0(i,sz(s))
    {
        n*=10;
        n+=s[i]-'0';
    }
    return n;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        string a,b;
        cin>>a>>b;
        if(a.size()<b.size())
            swap(a,b);
        vector<pi>vec;
        vector<int>ans;
        string c,d,e,f;
        if(a.size()==2 && b.size()==2)
        {
            c=a;
            d=b;
            swap(c[0],d[0]);
            vec.pb({c,d});
            swap(c[0],d[0]);
            swap(c[0],d[1]);
            vec.pb({c,d});
            swap(c[0],d[1]);
            swap(c[1],d[0]);
            vec.pb({c,d});
            swap(c[1],d[0]);
            swap(c[1],d[1]);
            vec.pb({c,d});
        }
        else
        {
            if(sz(a)==1 && sz(b)==1)
                vec.pb({a,b});
            else
            {
                c=a;
                d=b;
                swap(c[0],d[0]);
                vec.pb({c,d});
                swap(c[0],d[0]);
                swap(c[1],d[0]);
                vec.pb({c,d});
            }
        }
        int i,mx=-1;
        rep0(i,vec.size())
        {
            pi p=vec[i];
            mx=max(mx,num(p.fi)+num(p.se));
        }
        pf("%d\n",mx);
    }
}

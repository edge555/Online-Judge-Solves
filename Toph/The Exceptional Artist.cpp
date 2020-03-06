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
map<ll,set<char> >mp;
int main()
{
    FAST;
    ll i,n,k,c,x;
    char ch;
    cin>>n;
    rep0(i,n)
    {
        cin>>c>>x;
        if(c==2)
        {
            cin>>ch;
            mp[x].insert(ch);
        }
        else if(c==1)
        {
            if(mp.find(x)==mp.end())
                cout<<0<<endl;
            else
            {
                for(auto p:mp[x])
                    cout<<p;
                cout<<endl;
            }
        }
        else if(c==3)
        {
            if(mp.empty())
            {
                cout<<0<<endl;
                continue;
            }
            auto it=mp.upper_bound(x);
            if(it==mp.end())
                cout<<0<<endl;
            else
                cout<<it->fi<<endl;
        }
        else
        {
            if(mp.empty())
            {
                cout<<0<<endl;
                continue;
            }
            auto it=mp.lower_bound(x);
            if(it==mp.begin())
                cout<<0<<endl;
            else
            {
                it--;
                cout<<it->fi<<endl;
            }
        }
    }
}

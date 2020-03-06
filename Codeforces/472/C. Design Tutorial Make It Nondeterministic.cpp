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
int main()
{
    FAST;
    int i,n,k;
    vector<pi>vec;
    cin>>n;
    string a,b;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        vec.pb({a,b});
    }
    vector<int>ind;
    rep0(i,n)
    {
        cin>>k;
        ind.pb(k-1);
    }
    string now=min(vec[ind[0]].fi,vec[ind[0]].se);
    for(i=1;i<n;i++)
    {
        int j=ind[i];
        string s1=min(vec[j].fi,vec[j].se);
        string s2=max(vec[j].fi,vec[j].se);
        if(s1>=now)
            now=s1;
        else
        {
            if(s2>=now)
                now=s2;
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}

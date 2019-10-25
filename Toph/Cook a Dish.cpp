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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
vector<ll>fact;
ll nPr(int n, int r)
{
    return fact[n]/fact[n-r];
}
int main()
{
    int i;
    fact.pb(1);
    for(i=1;i<=11;i++)
        fact.pb(fact[i-1]*i);
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,k;
        string a;
        cin>>a>>k;
        if(k>sz(a))
        {
            pf("0\n");
            continue;
        }
        bool flag=false;
        rep0(i,sz(a))
        {
            if(a[i]=='0')
            {
                flag=true;
                break;
            }
        }
        int len=sz(a);
        if(flag)
        {
            int r=nPr(len-1,k-1);
            pf("%lld\n",nPr(len,k)-r);
        }
        else
            pf("%lld\n",nPr(len,k));
    }
}

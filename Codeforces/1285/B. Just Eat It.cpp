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
ll calc(int arr[],int n)
{
    ll i,maxend=0,maxfar=-1e18;
    for(i=1;i<n;i++)
    {
        maxend=maxend+arr[i];
        if(maxfar<maxend)
            maxfar=maxend;
        if(maxend<0)
            maxend=0;
    }
    return maxfar;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n;
        sf(n);
        int ara[n+1];
        ll mx=0,mx2=-1e18,mx3=-1e18;
        rep0(i,n)
        {
            sf(ara[i]);
            mx+=ara[i];
        }
        mx2=calc(ara,n);
        //db(mx2);
        mx3=mx2+ara[0]-ara[n-1];
        //dbb(mx2,mx3);
        mx2=max(mx2,mx3);
        puts(mx>mx2?"YES":"NO");
    }
}

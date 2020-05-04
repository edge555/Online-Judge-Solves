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
#define N 1000000
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
vector<int>vec[50];
int getsum(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int i,mx=-1;
    rep0(i,N)
    {
        if(i<1000)
        {
            int sum=abs(getsum(i));
            vec[sum].pb(i);
            mx=max(mx,sum);
        }
        else
        {
            int j=i;
            int sum=getsum(j%1000);
            j/=1000;
            int sum2=getsum(j);
            sum=abs(sum-sum2);
            vec[sum].pb(i);
            mx=max(mx,sum);
        }
    }
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n;
        sf(n);
        int cnt=0,m=n;
        int sum=getsum(m%1000);
        m/=1000;
        int sum2=getsum(m);
        sum=abs(sum-sum2);
        rep0(i,sum)
            cnt+=lower_bound(all(vec[i]),n)-vec[i].begin();
        pf("%d\n",cnt);
    }
}

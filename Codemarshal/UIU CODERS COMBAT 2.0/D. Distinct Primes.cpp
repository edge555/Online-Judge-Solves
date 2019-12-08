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
#define N 50005
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
vector<int>Prime;
const int MAX=50005;
const int LMT=230;
int flag[MAX>>6];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
bool prime(int n)
{
    return (n&1 && n!=1 && !chkbit(n)) || n==2;
}
void sieve()
{
    long long int i,j,k;
    for(i=3;i<LMT;i+=2)
    {
        if(!chkbit(i))
        {
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setbit(j);
        }
    }
    Prime.pb(2);
    for(i=3;i<=N;i+=2)
    {
        if(prime(i))
            Prime.pb(i);
    }
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n;
        sf(n);
        pf("Case %d: ",t);
        if(n==1 || n==4 || n==6)
        {
            puts("-1");
            continue;
        }
        if(prime(n))
        {
            puts("1");
            continue;
        }
        bool chk=false;
        rep0(i,sz(Prime))
        {
            int half=n/2+n%2;
            if(Prime[i]>half || n-Prime[i]<0)
                break;
            if(prime(n-Prime[i]))
            {
                chk=true;
                break;
            }
        }
        puts(chk?"2":"3");
    }
}

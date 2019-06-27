#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
const int MAX=100000000;
const int LMT=10000;
int flag[MAX>>6];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
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
}
bool prime(ll n)
{
    return (n&1 && n!=1 && !chkbit(n)) || n==2;
}
ll getnum(string a)
{
    ll i,n=0;
    rep0(i,a.size())
    {
        n*=10;
        n+=a[i]-'0';
    }
    return n;
}
int main()
{
    FAST;
    sieve();
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a,b,aa="",bb="",c="",d="";
        cin>>a>>b;
        int i;
        bool chk=false;
        rep0(i,a.size())
        {
            if(a[i]=='.')
            {
                chk=true;
                continue;
            }
            if(!chk)
                aa+=a[i];
            else
                c+=a[i];
        }
        chk=false;
        rep0(i,b.size())
        {
            if(b[i]=='.')
            {
                chk=true;
                continue;
            }
            if(!chk)
                bb+=b[i];
            else
                d+=b[i];
        }
        int mx=max(c.size(),d.size());
        while(c.size()!=mx)
            c+="0";
        while(d.size()!=mx)
            d+="0";
        aa+=c;
        bb+=d;
        ll n=getnum(aa);
        ll m=getnum(bb);
        if(n==m)
        {
            cout<<"2 2"<<endl;
            continue;
        }
        ll g=__gcd(n,m);
        n/=g;
        m/=g;
        if(prime(n) && prime(m))
            cout<<n<<" "<<m<<endl;
        else
            cout<<"impossible"<<endl;

    }
}

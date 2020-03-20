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
#define N 1000005
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
bool mark[N];
int dig(int n)
{
    int d=0;
    while(n)
    {
        d++;
        n/=10;
    }
    return d;
}
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i+=2)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
}
bool aux(int n)
{
    int i,d=dig(n),k,r=10,j,m,dd=0,dr=0;
    for(i=0;i<d;i++)
    {
        m=n;
        int rem=n%r;
        m/=r;
        r*=10;
        m*=10;
        int q=0,add=0;
        if(dr)
        {
            q=1;
            rep0(k,dr)
                q*=10;
            add=rem%q;
        }
        if(i==d-1)
        {
            m=1;
            rep0(j,9)
            {
                int x=m;
                rep0(k,dd)
                    x*=10;
                x+=add;
                if(mark[x])
                    return true;
                m++;
            }
        }
        else
        {
            rep0(j,10)
            {
                int x=m;
                rep0(k,dd)
                    x*=10;
                x+=add;
                if(mark[x])
                    return true;
                m++;
            }
        }
        dr++;
        dd++;
    }
    return false;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n;
        sf(n);
        if(n==1e6)
            puts("yes");
        else if(aux(n))
            puts("yes");
        else
            puts("no");
    }
}

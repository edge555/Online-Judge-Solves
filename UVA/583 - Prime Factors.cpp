#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define N 1000005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,true,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool mark[N];
vector<ll>vec;
void sieve()
{
    int i,j;
    memb(mark);
    for(i=4;i<N;i+=2)
        mark[i]=false;

    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
}
int main()
{
    ll n,i;
    sieve();

    for(i=3;i<N;i+=2)
    {
        if(mark[i])
            vec.pb(i);
    }

    while(1)
    {
        sl(n);
        if(n==0)
            return 0;
        bool print=false;
        if(n<0)
        {
            pf("%lld = -1",n);
            n*=-1;
            print=true;
        }
        else
            pf("%lld = ",n);
        while(n%2==0)
        {
            if(!print)
            {
                pf("2",n);
                print=true;
            }
            else
                pf(" x 2");
            n/=2;
        }
        for(i=0;vec[i]<=n && i<vec.size();i++)
        {
            while(n%vec[i]==0)
            {
                if(!print)
                {
                    pf("%lld",vec[i]);
                    print=true;
                }
                else
                    pf(" x %lld",vec[i]);
                n/=vec[i];
            }
        }
        if(n>2)
        {
            if(!print)
                pf("%lld",n);
            else
                pf(" x %lld",n);
        }
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

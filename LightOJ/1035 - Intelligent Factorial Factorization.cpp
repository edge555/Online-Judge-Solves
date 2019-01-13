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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[105];
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,i,j;
        sf(n);
        mem(ara);
        int fact=1;
        for(i=2;i<=n;i++)
        {
            fact*=i;
            while(fact%2==0)
            {
                ara[2]++;
                fact/=2;
            }
            for(j=3;j<=fact;j+=2)
            {
                while(fact%j==0)
                {
                    fact/=j;
                    ara[j]++;
                }
            }
            if(fact>2)
                ara[fact]++;
        }
        pf("Case %d: %d =",t,n);
        if(ara[2]!=0)
            pf(" 2 (%d)",ara[2]);
        for(i=3;i<=n;i+=2)
        {
            if(ara[i]!=0)
                pf(" * %d (%d)",i,ara[i]);
        }
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

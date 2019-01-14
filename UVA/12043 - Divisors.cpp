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
#define pi pair<int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int i,j;
    vector<pi>vec;
    for(i=1;i<N;i++)
    {
        int cnt=0;
        ll sum=0;
        if(i%2==0)
        {
            for(j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    int k=i/j;
                    if(j==k)
                    {
                        cnt++;
                        sum+=j;
                    }
                    else
                    {
                        cnt+=2;
                        sum+=(j+k);
                    }
                }
            }
        }
        else
        {
            for(j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    int k=i/j;
                    if(j==k)
                    {
                        cnt++;
                        sum+=j;
                    }
                    else
                    {
                        cnt+=2;
                        sum+=(j+k);
                    }
                }
            }
        }
        vec.pb({cnt,sum});
    }
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int a,b,c;
        sfff(a,b,c);
        if(a%c!=0)
        {
            double p=ceil(a/(c*1.0));
            a=p*c;
        }
        ll x=0,y=0;
        for(i=a;i<=b;i+=c)
        {
            x+=vec[i-1].fi;
            y+=vec[i-1].se;
        }
        pf("%lld %lld\n",x,y);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll a,b,p,i;
        sff(a,b);
        ll k=__gcd(a,b),cnt=0;
        if(k%2==0)
        {

            reps(i,1,sqrt(k))
            {
                if(k%i==0)
                {
                    p=k/i;
                    if(i==p)
                        cnt++;
                    else
                        cnt+=2;
                }
            }
        }
        else
        {
            for(i=1;i<=sqrt(k);i+=2)
            {
                if(k%i==0)
                {
                    p=k/i;
                    if(i==p)
                        cnt++;
                    else
                        cnt+=2;
                }
            }
        }
        pf("%lld\n",cnt);
    }

    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}

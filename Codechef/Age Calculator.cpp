#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
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
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k;
        sf(n);
        int daysinyear=0;
        vector<int>vec,cumsum;
        vec.pb(0);
        cumsum.pb(0);
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
            daysinyear+=k;
            cumsum.pb(daysinyear);
        }
        int y,m,d,yy,mm,dd;
        ll cnt=0;
        sfff(y,m,d);
        sfff(yy,mm,dd);
        int left=vec[m]-d+1;
        cnt+=left;
        cnt+=daysinyear-cumsum[m];
        if(y%4==0)
            cnt++;
        y++;
        cnt+=cumsum[mm-1];
        cnt+=dd;
        int diff=yy-y;
        cnt+=(daysinyear*diff);
        yy--;
        y--;
        cnt+=((yy/4)-(y/4));
        pf("%lld\n",cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

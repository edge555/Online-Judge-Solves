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
int main()
{
    int i,n;
    sf(n);
    ll a,b;
    unordered_map<ll,int>left,right,twice;
    rep0(i,n)
    {
        sll(a,b);
        left[a]++;
        right[b]++;
        if(a==b)
            twice[a]++;
    }
    ll half=ceil(n/2.0);
    ll ans=LONG_MAX;
    for(auto it=left.begin();it!=left.end();it++)
    {
        ll now=it->fi,freq=it->se;
        if(it->se>=half)
        {
            puts("0");
            return 0;
        }
        ll need=half-freq;
        if(right[now]-twice[now]>=need)
            ans=min(ans,need);
    }
    if(ans==LONG_MAX)
    {
        for(auto it=right.begin();it!=right.end();it++)
        {
            ll now=it->fi,freq=it->se;
            if(it->se>=half)
            {
                pf("%lld",half);
                return 0;
            }
        }
        pf("-1");
    }
    else
        pf("%lld",ans);
}

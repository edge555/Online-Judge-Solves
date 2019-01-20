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
int countzero(int num)
{
    int n=5,zero=0;
    while(num>=n)
    {
        zero+=(num/n);
        n*=5;
    }
    return zero;
}
int bs(int n)
{
    int low=0,high=1000000000;
    bool ans=false;
    while(low<high)
    {
        int mid=(low+high)/2;
        int zero=countzero(mid);
        if(zero==n)
        {
            ans=true;
            high=mid;
        }
        else if(zero>n)
            high=mid;
        else
            low=mid+1;
    }
    if(!ans)
        low=-1;
    return low;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n;
        sf(n);
        pf("Case %d: ",t);
        int ans=bs(n);
        if(ans==-1)
            puts("impossible");
        else
            pf("%d\n",ans);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

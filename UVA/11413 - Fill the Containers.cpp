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
int n,m;
vector<int>vec;
bool possible(int cap)
{
    int i,cnt=0,sum=0;
    rep0(i,n)
    {
        if(vec[i]>cap)
            return false;
        if(sum+vec[i]<=cap)
            sum+=vec[i];
        else
        {
            if(cnt+1==m)
                return false;
            sum=0;
            cnt++;
            i--;
        }
    }
    return true;
}
int main()
{
    while(~sff(n,m))
    {
        int i,k;
        vec.clear();
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        int lo=0,hi=1e9,ans=-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(possible(mid))
            {
                ans=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        pf("%d\n",ans);
    }
}

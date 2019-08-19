#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
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
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k,p,odd=0,even=0,prev=-1;
        sff(n,k);
        bool allsame=true;
        vector<int>vec;
        rep0(i,n)
        {
            sf(p);
            vec.pb(p);
            if(i==0)
                prev=p;
            else
            {
                if(prev!=p)
                    allsame=false;
            }
            if(p&1)
                odd++;
            else
                even++;
            prev=p;
        }
        if(!k)
        {
            if(allsame)
                puts("0");
            else
                puts("Impossible");
            continue;
        }

        sort(all(vec));
        int mid=n/2,mid2=mid+1;
        int v=vec[mid],v2=vec[mid2];
        bool pos=true;
        ll cnt=0,cnt2=0;
        rep0(i,n)
        {
            if(vec[i]!=v)
            {
                int diff=abs(v-vec[i]);
                if(diff%k==0)
                    cnt+=diff/k;
                else
                    pos=false;
            }
            if(vec[i]!=v2)
            {
                int diff=abs(v2-vec[i]);
                if(diff%k==0)
                    cnt2+=diff/k;
                else
                    pos=false;
            }
        }
        if(pos)
            cout<<min(cnt,cnt2)<<endl;
        else
            puts("Impossible");
    }
}

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
#define N 21
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
        int n,type,i,j,k;
        sff(n,type);
        vector<int>vec;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        vector<pi>q[N];
        rep0(i,n)
        {
            int now=vec[i];
            j=i+1;
            while(1)
            {

                if(j>=n)
                {
                    j--;
                    q[now].pb({i,j});
                    i=n;
                    break;
                }
                if(vec[j]!=now)
                {
                    j--;
                    q[vec[j]].pb({i,j});
                    i=j;
                    break;
                }
                j++;
            }
        }
        pf("Test Case: %d\n",t);
        bool printed=false;
        rep(i,type)
        {
            int cnt=0;
            double sum=0;
            if(q[i].empty())
                continue;
            rep0(j,q[i].size()-1)
            {
                sum+=(q[i][j+1].fi-q[i][j].se-1);
                cnt++;
            }
            if(cnt!=0)
                printed=true;
            sum/=cnt;
            if(sum>=0)
                pf("%d %.2f\n",i,sum);
        }
        if(!printed)
            puts("No Pattern");
    }
}

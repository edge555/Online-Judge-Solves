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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int cnt0[N],cnt1[N];
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a;
        cin>>a;
        int i,j,o=0,z=0,n=a.size();
        rep0(i,n)
        {
            a[i]=='0'?z++:o++;
            cnt0[i]=z;
            cnt1[i]=o;
        }
        o=0,z=0;
        ll cnt=0;
        rep0(i,n)
        {
            int len,cur0=0,cur1=0;
            j=1;
            while(1)
            {
                len=j*(j+1);
                if(n-i<len)
                    break;
                cur0=cnt0[i+len-1]-z;
                cur1=cnt1[i+len-1]-o;
                if(cur0==cur1*cur1)
                    cnt++;
                j++;
            }
            a[i]=='0'?z++:o++;
        }
        pf("%lld\n",cnt);
    }
}

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
#define N 1001
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
bool dp[N][N];
int countpsub(string s)
{
    int i,j,cnt=0;
    memset(dp,false,sizeof(dp));
    rep0(i,1000)
        dp[i][i]=true;
    for(i=s.length()-1;i>=0;i--)
    {
        for(j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j] && ((i+1>j-1) || dp[i+1][j-1]))
            {
                dp[i][j]=true;
                cnt++;
            }
        }
    }
    cnt+=s.length();
    return cnt;
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a;
        cin>>a;
        double x=(double)countpsub(a);
        double y=(a.size()*(a.size()+1))/2.0;
        cout<<fixed<<setprecision(3)<<x/y<<endl;
    }
}

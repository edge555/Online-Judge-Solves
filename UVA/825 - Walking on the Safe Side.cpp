#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 1005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<endl;
#define dbb(x,y) cout<<#x<<" :: "<<x<<"	"<<#y<<" :: "<<y<<endl;
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int dp[N][N],n,m;
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        cin>>n>>m;
        int i,j,k;
        string a;
        cin.ignore();
        mem(dp,0);
        rep0(i,n)
        {
            getline(cin,a);
            stringstream ss(a);
            bool f=false;
            int x;
            while(ss>>k)
            {
                if(!f)
                    x=k;
                else
                    dp[x][k]=-1;
                f=true;
            }
        }
        dp[0][1]=1;
        rep(i,n)
        {
            rep(j,m)
            {
                if(dp[i][j]==-1)
                    continue;
                if(dp[i-1][j]!=-1)
                    dp[i][j]+=dp[i-1][j];
                if(dp[i][j-1]!=-1)
                    dp[i][j]+=dp[i][j-1];
            }
        }   
        if(t>1)
            cout<<endl;
        cout<<dp[n][m]<<endl;        
    }
}
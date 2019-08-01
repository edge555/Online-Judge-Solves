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
#define pi pair<string,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int ara[N][N],n,m,ans;
bool chk(int i,int j,int c)
{
    int cnt=0;
    if(ara[i][j+1]==c)
        cnt++;
    if(ara[i][j-1]==c)
        cnt++;
    if(ara[i-1][j]==c)
        cnt++;
    if(ara[i+1][j]==c)
        cnt++;
    return cnt==4;
}
int traverse(int i,int j,int c)
{
    int cnt=0,x=i,y=j;
    while(y<m && ara[x][y]==c)
    {
        cnt++;
        y++;
    }
    x=i,y=j;
    while(x<n && ara[x][y]==c)
    {
        cnt++;
        x++;
    }
    x=i,y=j;
    while(x>=0 && ara[x][y]==c)
    {
        cnt++;
        x--;
    }
    x=i,y=j;
    while(y>=0 && ara[x][y]==c)
    {
        cnt++;
        y--;
    }
    return cnt-3;
}
int main()
{
    int t,tc,i,j;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        rep0(i,n)
        {
            rep0(j,m)
                sf(ara[i][j]);
        }
        ans=0;
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<m-1;j++)
            {
                if(chk(i,j,ara[i][j]))
                    ans=max(ans,traverse(i,j,ara[i][j]));
            }
        }
        pf("Case %d: %d\n",t,ans);
    }
}

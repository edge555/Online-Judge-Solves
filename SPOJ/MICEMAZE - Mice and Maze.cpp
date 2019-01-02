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
#define N 101
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,e,t,m;
int dis[N][N];
void reset()
{
    int i,j;
    rep(i,n)
    {
        rep(j,n)
            dis[i][j]=1e9;
    }
}
void floydwarshall()
{
    int i,j,k;
    rep(k,n)
    {
        rep(i,n)
        {
            rep(j,n)
            {
                if(j!=e)
                {
                    if(dis[i][j]>dis[i][k]+dis[k][j])
                        dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
}
int main()
{
    sff(n,e);
    sff(t,m);
    reset();
    int a,b,w;
    while(m--)
    {
        sfff(a,b,w);
        dis[b][a]=w;
    }
    floydwarshall();
    int i,cnt=0;
    rep(i,n)
    {
        if(dis[e][i]<=t)
            cnt++;
    }
    pf("%d",++cnt);
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

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
#define N 105
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dis[N][N];
void reset()
{
    int i,j;
    rep(i,N)
    {
        rep(j,N)
            dis[i][j]=1e9;
    }
}
void floydwarshall()
{
    int i,j,k;
    rep(k,N)
    {
        rep(i,N)
        {
            rep(j,N)
            {
                if(dis[i][j]>dis[i][k]+dis[k][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }
}
int main()
{
    int tc=1,a,b;
    while(1)
    {
        sff(a,b);
        if(a+b==0)
            return 0;
        reset();
        dis[a][b]=1;
        while(1)
        {
            sff(a,b);
            if(a+b==0)
                break;
            dis[a][b]=1;
        }
        floydwarshall();
        int i,j,sum=0,cnt=0;
        rep(i,N)
        {
            rep(j,N)
            {
                if(dis[i][j]!=1e9 && i!=j)
                {
                    sum+=dis[i][j];
                    cnt++;
                }
            }
        }
        pf("Case %d: average length between pages = %.3f clicks\n",tc++,(float)sum/cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

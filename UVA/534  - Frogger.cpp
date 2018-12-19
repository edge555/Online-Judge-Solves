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
#define N 205
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
double dis[N][N];
struct point
{
    int x,y;
}pnt[N];
double calc(point a,point b)
{
    double x1=a.x,y1=a.y;
    double x2=b.x,y2=b.y;
    double x=(x2-x1)*(x2-x1);
    double y=(y2-y1)*(y2-y1);
    return sqrt(x+y);
}
int main()
{
    int tc=1;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int i,j,k,a,b;
        rep0(i,n)
            sff(pnt[i].x,pnt[i].y);
        rep0(i,n-1)
        {
            reps(j,i+1,n-1)
            {
                dis[i][j]=calc(pnt[i],pnt[j]);
                dis[j][i]=dis[i][j];
            }
        }
        rep0(k,n)
        {
            rep0(i,n)
            {
                rep0(j,n)
                    dis[i][j]=min(dis[i][j],max(dis[i][k],dis[k][j]));
            }
        }
        pf("Scenario #%d\n",tc++);
        pf("Frog Distance = %0.3f\n\n",dis[0][1]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

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
int n;
double dis[N][N];
struct point
{
    int x,y;
}pnt[N];
double calc(point a,point b)
{
    int x1=a.x,y1=a.y;
    int x2=b.x,y2=b.y;
    int x=(x2-x1)*(x2-x1);
    int y=(y2-y1)*(y2-y1);
    double d=sqrt(x+y);
    return d;
}
void setvalue()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,n)
            dis[i][j]=1e9;
    }
    rep0(i,n)
    {
        rep0(j,n)
        {
            double d=calc(pnt[i],pnt[j]);
            if(d<=10.000)
                dis[i][j]=d;
        }
    }
}
void floydwarshall()
{
    int i,j,k;
    rep0(k,n)
    {
        rep0(i,n)
        {
            rep0(j,n)
            {
                if(dis[i][j]>dis[i][k]+dis[k][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,a,b;
        sf(n);
        rep0(i,n)
            sff(pnt[i].x,pnt[i].y);
        setvalue();
        floydwarshall();
        double ans=-1;
        rep0(i,n)
        {
            rep0(j,n)
                ans=max(ans,dis[i][j]);
        }

        pf("Case #%d:\n",t);
        if(ans==1e9)
            pf("Send Kurdy\n");
        else
            pf("%.4f\n",ans);
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

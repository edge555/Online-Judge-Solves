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
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,q;
const double pi=3.141592653589793;
double dis[N][N];
struct point
{
    double x,y;
}pnt[N];
unordered_map<string,int>mp;
void reset()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,n)
            dis[i][j]=1e9;
        dis[i][i]=0;
    }
    mp.clear();
}
double calc(double x1,double y1,double x2,double y2)
{
    double a=acos(cos(y1)*cos(y2)*cos(x1-x2)+sin(y1)*sin(y2));
    return 6378*a;
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
                if(dis[i][k]!=INT_MAX && dis[k][j]!=INT_MAX
                   && dis[i][k]+dis[k][j]<dis[i][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }
}
int main()
{
    int tc=1;
    while(1)
    {
        sfff(n,m,q);
        if(n+m+q==0)
            return 0;
        string s,t;
        reset();
        int i,ind=0;
        rep0(i,n)
        {
            cin>>s>>pnt[i].x>>pnt[i].y;
            mp[s]=i;
        }
        while(m--)
        {
            cin>>s>>t;
            int x=mp[s];
            int y=mp[t];
            double x1,y1,x2,y2;
            x1=pnt[x].y*pi/180;
            y1=pnt[x].x*pi/180;
            x2=pnt[y].y*pi/180;
            y2=pnt[y].x*pi/180;
            double p=calc(x1,y1,x2,y2);
            p=floor(p+0.5);
            dis[x][y]=min(dis[x][y],p);
        }
        floydwarshall();
        if(tc!=1)
            puts("");
        pf("Case #%d\n",tc++);
        while(q--)
        {
            cin>>s>>t;
            int x=mp[s];
            int y=mp[t];
            if(dis[x][y]==1e9)
                pf("no route exists\n");
            else
                pf("%0.0f km\n",dis[x][y]);
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

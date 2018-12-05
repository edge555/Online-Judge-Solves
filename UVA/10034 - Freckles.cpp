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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int par[N];
struct edge
{
    int u,v;
    double dis;
    bool operator<(const edge &p)const
    {
        return dis<p.dis;
    }
}ara[N];
struct point
{
    double x,y;
}pnt[N];
void makeset(int n)
{
    int i;
    rep0(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
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
    int tc,t;
    sf(tc);
    bool space=false;
    rep(t,tc)
    {
        int n,i,j;
        sf(n);
        makeset(n);
        rep0(i,n)
            cin>>pnt[i].x>>pnt[i].y;
        int ind=0;
        rep0(i,n-1)
        {
            reps(j,i+1,n-1)
            {
                edge e;
                e.u=i;
                e.v=j;
                e.dis=calc(pnt[i],pnt[j]);
                ara[ind]=e;
                ind++;
            }
        }
        sort(ara,ara+ind);
        double sum=0;
        int cnt=0;
        rep0(i,ind)
        {
            int u=findpar(ara[i].u);
            int v=findpar(ara[i].v);
            if(u!=v)
            {
                par[u]=v;
                sum+=ara[i].dis;
                cnt++;
                if(cnt==n)
                    break;
            }
        }
        if(space)
            puts("");
        space=true;
        pf("%.2f\n",sum);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

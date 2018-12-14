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
#define N 12
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<char,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
string a[N];
int cost[N][N];
bool vis[N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void setvalue()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,n)
        {
            vis[i][j]=false;
            cost[i][j]=0;
        }
    }
}
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<n && !vis[x][y])
        return true;
    return false;
}
int bfs(int x,int y,int x1,int y1)
{
    vis[x][y]=true;
    cost[x][y]=0;
    queue<pi>q;
    q.push({x,y});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int x_=p.fi,y_=p.se,i;
        rep0(i,4)
        {
            int xx=x_+dx[i];
            int yy=y_+dy[i];
            if(valid(xx,yy))
            {
                if(a[xx][yy]=='.')
                {
                    vis[xx][yy]=true;
                    cost[xx][yy]=cost[x_][y_]+1;
                    if(xx==x1 && yy==y1)
                        break;
                    q.push({xx,yy});
                }
            }
        }
    }
    if(vis[x1][y1])
        return cost[x1][y1];
    else
        return -1;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sf(n);
        int i,j;
        vector<pii>vec;
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,a[i].size())
            {
                if(a[i][j]>='A' && a[i][j]<='Z')
                    vec.pb({a[i][j],{i,j}});
            }
        }
        sort(all(vec));
        int cost=0;
        bool chk=true;
        rep0(i,vec.size()-1)
        {
            int x,y,x1,y1;
            pii p=vec[i];
            x=p.se.fi;
            y=p.se.se;
            a[x][y]='.';
            p=vec[i+1];
            x1=p.se.fi;
            y1=p.se.se;
            a[x1][y1]='.';
            setvalue();
            int c=bfs(x,y,x1,y1);
            if(c!=-1)
                cost+=c;
            else
            {
                chk=false;
                break;
            }
        }
        pf("Case %d: ",t);
        if(chk)
            pf("%d\n",cost);
        else
            pf("Impossible\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

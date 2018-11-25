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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,i,j,k;
int dx[]={-1,0,0};
int dy[]={0,1,-1};
bool vis[10][10];
string s="IEHOVA#";
string a[10];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && a[x][y]==s[k])
        return true;
    return false;
}
void dfs(int x,int y)
{
    vis[x][y]=true;
    rep0(i,3)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];

        if(valid(xx,yy))
        {
            k++;
            if(i==0)
                pf("forth");
            else if(i==1)
                pf("right");
            else
                pf("left");
            if(k<7)
                pf(" ");

            dfs(xx,yy);
        }
    }
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        int x,y;
        sff(n,m);
        getchar();
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,m)
            {
                if(a[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        k=0;
        memb(vis);
        dfs(x,y);
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

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
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,k;
string a[501];
bool vis[501][501];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool valid(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m || a[x][y]!='.' || vis[x][y] || k==0)
        return false;
    return true;
}
void dfs(int x,int y)
{
    int i;
    vis[x][y]=true;
    rep0(i,4)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy))
           dfs(xx,yy);
    }
    if(k!=0)
    {
        a[x][y]='X';
        k--;
    }
}
int main()
{
    int i,j;
    sfff(n,m,k);
    rep0(i,n)
        cin>>a[i];

    rep0(i,n)
    {
        rep0(j,m)
        {
            if(a[i][j]=='.' && k!=0)
                dfs(i,j);
        }
    }
    rep0(i,n)
        cout<<a[i]<<endl;
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

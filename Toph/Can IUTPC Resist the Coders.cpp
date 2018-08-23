#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define N 10000001
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
bool mark[N];
vector<int>vec;
int n;
void seive()
{
    ll i,j;
    for(i=4;i<=N;i+=2)
        mark[i]=true;

    for(i=2;i<=N;i++)
    {
        if(mark[i]==false)
        {
            for(j=i+i;j<=N;j+=i)
                mark[j]=true;
        }
    }
    vec.pb(2);
    for(i=3;i<=N;i+=2)
    {
        if(!mark[i])
            vec.pb(i);
    }
}
bool chk[805][805];
int ans[805][805];
bool valid(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=n)
        return false;
    return true;
}
void dfs(int state,int ddx,int ddy,int num)
{
    int i,x,y;
    for(i=state;i<4;i++)
    {
        x=dx[i]+ddx;
        y=dy[i]+ddy;
        if(valid(x,y))
        {
            if(!chk[x][y])
            {
                ans[x][y]=vec[num];
                chk[x][y]=true;
                dfs(i,x,y,num+1);
            }
        }
    }
    if(valid(ddx+dx[0],ddy+dy[0]))
    {
        x=dx[0]+ddx;
        y=dy[0]+ddy;
        if(!chk[x][y])
        {
            ans[x][y]=vec[num];
            chk[x][y]=true;
            dfs(0,x,y,num+1);
        }
    }
}

int main()
{
    seive();
    int i,j;
    sf(n);
    dfs(0,0,0,1);
    ans[0][0]=2;
    chk[0][0]=true;

    for(i=0;i<n;i++)
    {
        cout<<ans[i][0];
        for(j=1;j<n;j++)
            cout<<" "<<ans[i][j];
        puts("");
   }
}

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
int n,m,i,j;
string a[105];
bool valid(int x,int y)
{
    if(x<0 || y<0 || x>=n || y>=m)
        return false;
    return true;
}
void dfs(int x,int y)
{
    if(!valid(x,y))
        return;
    if(a[x][y]!='@')
        return;
    if(a[x][y]=='@')
        a[x][y]='*';
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x+1,y+1);
    dfs(x+1,y-1);
    dfs(x-1,y+1);
    dfs(x-1,y-1);
}
int main()
{
    while(1)
    {
        sff(n,m);
        getchar();
        if(n+m==0)
            return 0;
        rep0(i,n)
            cin>>a[i];
        int area=0;
        rep0(i,n)
        {
            rep0(j,m)
            {
                if(a[i][j]=='@')
                {
                    area++;
                    dfs(i,j);
                }
            }
        }
        pf("%d\n",area);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

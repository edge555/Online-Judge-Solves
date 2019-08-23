#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 51
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dx[]={0,0,1,1};
int dy[]={0,1,0,1};
int ara[N][N],n,m;
int ara2[N][N];
queue<pi>q;
void setone(int x,int y)
{
    int i;
    rep0(i,4)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        ara2[xx][yy]=1;
    }
}
void traverse(int x,int y)
{
    int i,cnt=0,cnt2=0;
    rep0(i,4)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        cnt+=ara[xx][yy];
        cnt2+=ara2[xx][yy];
    }
    if(cnt==4)
    {
        if(cnt2==4)
            return;
        setone(x,y);
        q.push({x+1,y+1});
    }
}

int main()
{
    int i,j;
    sff(n,m);
    rep0(i,n)
    {
        rep0(j,m)
            sf(ara[i][j]);
    }
    rep0(i,n-1)
    {
        rep0(j,m-1)
            traverse(i,j);
    }
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(ara[i][j]!=ara2[i][j])
            {
                pf("-1");
                return 0;
            }
        }
    }
    pf("%d\n",q.size());
    while(!q.empty())
    {
        pi pr=q.front();
        q.pop();
        pf("%d %d\n",pr.fi,pr.se);
    }
}

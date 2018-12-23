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
#define N 31
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
unordered_map<string,int>mp;
double cost[N][N];
void reset()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,n)
            cost[i][j]=0.0;
    }
    mp.clear();
}
bool floydwarshall()
{
    int i,j,k;
    rep0(k,n)
    {
        rep0(i,n)
        {
            rep0(j,n)
                cost[i][j]=max(cost[i][j],cost[i][k]*cost[k][j]);
        }
    }
    rep0(i,n)
    {
        if(cost[i][i]>1)
            return true;
    }
    return false;
}
int main()
{
    int tc=1;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int i,ind=0;
        string a,b,c;
        reset();
        rep0(i,n)
        {
            cin>>a;
            mp[a]=ind++;
        }
        int m,x,y;
        sf(m);
        double d;
        while(m--)
        {
            cin>>a>>d>>b;
            x=mp[a];
            y=mp[b];
            cost[x][y]=d;
        }
        pf("Case %d: ",tc++);
        if(floydwarshall())
            pf("Yes\n");
        else
            pf("No\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

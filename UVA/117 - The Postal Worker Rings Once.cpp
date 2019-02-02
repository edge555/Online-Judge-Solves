#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 30
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int grid[N][N];
unordered_map<int,int>mp;
void reset()
{
    int i,j;
    rep0(i,26)
    {
        rep0(j,26)
            grid[i][j]=1e9;
    }
    mp.clear();
}
void floydwarshall()
{
    int i,j,k;
    rep0(k,26)
    {
        rep0(i,26)
        {
            rep0(j,26)
            {
                if(grid[i][j]>grid[i][k]+grid[k][j])
                    grid[i][j]=grid[i][k]+grid[k][j];
            }
        }
    }
}
int main()
{
    string a;
    while(cin>>a)
    {
        ll sum=0;
        reset();
        while(1)
        {
            if(a=="deadend")
                break;
            int len=a.size();
            sum+=len;
            int x=a[0]-'a',y=a[len-1]-'a';
            mp[x]++;
            mp[y]++;
            grid[x][y]=len;
            grid[y][x]=len;
            cin>>a;
        }
        queue<int>q;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->se%2==1)
                q.push(it->fi);
        }
        if(q.empty())
            pf("%lld\n",sum);
        else
        {
            floydwarshall();
            int x=q.front();
            q.pop();
            int y=q.front();
            pf("%lld\n",sum+grid[x][y]);
        }
    }
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define N 100005
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
vector<pi>vec;
vector<int>grid[N];
int cnt,n,indeg[N];
queue<int>q;
void reset()
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        indeg[i]=0;
    }
    vec.clear();
}
bool topsort()
{
    int i;
    rep(i,n)
    {
        if(indeg[i]==0)
            q.push(i);
    }
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        cnt++;
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            indeg[p]--;
            if(indeg[p]==0)
                q.push(p);
        }
    }
    return cnt==n;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j,a,b,m;
        sff(n,m);
        rep0(i,m)
        {
            sff(a,b);
            vec.pb({a,b});
        }
        bool flag=false;
        rep0(i,m)
        {
            reset();
            cnt=0;
            rep0(j,m)
            {
                pi p=vec[j];
                a=p.fi,b=p.se;
                if(j==i)
                {
                    grid[b].pb(a);
                    indeg[a]++;
                }
                else
                {
                    grid[a].pb(b);
                    indeg[b]++;
                }
            }
            if(topsort())
            {
                puts("Yes");
                flag=true;
                break;
            }
        }
        if(!flag)
            puts("No");
    }
}

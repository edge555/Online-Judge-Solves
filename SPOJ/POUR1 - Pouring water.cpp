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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int a,b,c;
struct node
{
    int v1,v2,s;
};
map<pi,bool>mp;
int bfs()
{
    queue<node>q;
    q.push({0,0,0});
    int cnt=0;
    while(!q.empty())
    {
        node n=q.front();
        q.pop();
        int x=n.v1,y=n.v2,step=n.s;
        if(x==c || y==c)
            return step;
        if(x!=a)
        {
            if(!mp[{a,y}])
            {
                mp[{a,y}]=true;
                q.push({a,y,step+1});
            }
        }
        if(y!=b)
        {
            if(!mp[{x,b}])
            {
                mp[{x,b}]=true;
                q.push({x,b,step+1});
            }
        }
        if(!mp[{x,0}])
        {
            mp[{x,0}]=true;
            q.push({x,0,step+1});
        }
        if(!mp[{0,y}])
        {
            mp[{0,y}]=true;
            q.push({0,y,step+1});
        }
        if(x!=a)
        {
            int need=a-x;
            if(y!=0)
            {
                if(y==need)
                {
                    if(!mp[{a,0}])
                    {
                        mp[{a,0}]=true;
                        q.push({a,0,step+1});
                    }
                }
                if(y<need)
                {
                    if(!mp[{x+y,0}])
                    {
                        mp[{x+y,0}]=true;
                        q.push({x+y,0,step+1});
                    }
                }
                if(y>need)
                {
                    if(!mp[{a,y-need}])
                    {
                        mp[{a,y-need}]=true;
                        q.push({a,y-need,step+1});
                    }
                }
            }
        }
        if(y!=b)
        {
            int need=b-y;
            if(x!=0)
            {
                if(x==need)
                {
                    if(!mp[{0,b}])
                    {
                        mp[{0,b}]=true;
                        q.push({0,b,step+1});
                    }
                }
                if(x<need)
                {
                    if(!mp[{0,x+y}])
                    {
                        mp[{0,x+y}]=true;
                        q.push({0,x+y,step+1});
                    }
                }
                if(x>need)
                {
                    if(!mp[{x-need,b}])
                    {
                        mp[{x-need,b}]=true;
                        q.push({x-need,b,step+1});
                    }
                }
            }
        }
    }
    return -1;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sfff(a,b,c);
        int ans=bfs();
        pf("%d\n",ans);
        mp.clear();
    }
}

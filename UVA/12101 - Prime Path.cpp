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
#define N 10000
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool mark[N];
unordered_map<string,int>mp;
vector<int>grid[N];
bool vis[N];
int cost[N];
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
}
int getdiff(string a,string b)
{
    int i,cnt=0;
    rep0(i,a.size())
    {
        if(a[i]!=b[i])
            cnt++;
    }
    return cnt;
}
void reset()
{
    int i;
    rep0(i,N)
    {
        vis[i]=false;
        cost[i]=0;
    }
}
void bfs(int st,int en)
{
    vis[st]=true;
    cost[st]=0;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int p=q.front(),i;
        q.pop();
        if(st==en)
            return;
        rep0(i,grid[p].size())
        {
            int k=grid[p][i];
            if(!vis[k])
            {
                vis[k]=true;
                cost[k]=cost[p]+1;
                q.push(k);
            }
        }
    }
}
int main()
{
    sieve();
    vector<string>vec;
    int ind=0,i,j;
    for(i=1001;i<=N;i+=2)
    {
        if(mark[i])
        {
            string s=to_string(i);
            vec.pb(s);
            mp[s]=ind;
            ind++;
        }
    }
    rep0(i,vec.size()-1)
    {
        string a=vec[i];
        reps(j,i+1,vec.size()-1)
        {
            string b=vec[j];
            int k=getdiff(a,b);
            if(k==1)
            {
                int x=mp[a],y=mp[b];
                grid[x].pb(y);
                grid[y].pb(x);
            }
        }
    }
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int a,b;
        sff(a,b);
        int st=mp[to_string(a)];
        int en=mp[to_string(b)];
        reset();
        bfs(st,en);
        if(!vis[en])
            pf("Impossible\n");
        else
            pf("%d\n",cost[en]);
    }
}

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
bool vis[10001];
vector<int>grid[10001];
void dfs(int n)
{
    vis[n]=true;
    int i,k;
    rep0(i,grid[n].size())
    {
        k=grid[n][i];
        if(!vis[k])
            dfs(k);
    }
}
int main()
{
    int tc=1;
    while(1)
    {
        map<int,int>mp,indegree;
        map<int,int>::iterator it;
        int a,b,ind=0,i;
        sff(a,b);
        if(a+b==-2)
            return 0;
        if(a==0 && b==0)
        {
            pf("Case %d is a tree.\n",tc++);
            continue;
        }
        if(mp.find(a)==mp.end())
            mp[a]=ind++;
        if(mp.find(b)==mp.end())
            mp[b]=ind++;
        grid[mp[a]].pb(mp[b]);
        indegree[mp[a]]=0;
        indegree[mp[b]]=0;
        indegree[mp[b]]++;

        while(1)
        {
            sff(a,b);
            if(a+b==0)
                break;
            if(mp.find(a)==mp.end())
            {
                indegree[mp[a]]=0;
                mp[a]=ind++;
            }
            if(mp.find(b)==mp.end())
            {
                indegree[mp[b]]=0;
                mp[b]=ind++;
            }
            grid[mp[a]].pb(mp[b]);
            indegree[mp[b]]++;
        }
        int root,cnt=0;
        bool chk=true;
        rep0(i,ind)
        {
            if(indegree[i]==0)
            {
                root=i;
                cnt++;
            }
            else if(indegree[i]>1)
                chk=false;
        }
        if(cnt==0 || cnt>1)
            chk=false;
        dfs(root);
        rep0(i,ind)
        {
            if(!vis[i])
                chk=false;
        }
        if(chk)
            pf("Case %d is a tree.\n",tc++);
        else
            pf("Case %d is not a tree.\n",tc++);
        rep0(i,ind)
        {
            vis[i]=false;
            grid[i].clear();
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
unordered_map<int,bool>mp,vis;
stack<int>s;
vector<int>grid[N];
void dfs(int n)
{
    vis[n]=true;
    int i;
    rep0(i,grid[n].size())
    {
        int k=grid[n][i];
        if(!vis[k])
            dfs(k);
    }
    s.push(n);
}
void topsort()
{
    for(int i=1;i<=26;i++)
    {
        if(mp[i] && !vis[i])
        {
            dfs(i);
        }
    }
}
int main()
{
    string prev="",a;
    int cnt=0;
    while(1)
    {
        cin>>a;
        if(a[0]=='#')
            break;
        cnt++;
        if(prev=="")
        {
            prev=a;
            continue;
        }
        int mn=min(a.size(),prev.size());
        int i;
        rep0(i,mn)
        {
            if(prev[i]!=a[i])
            {
                ;
                int x=prev[i]-'A'+1;
                int y=a[i]-'A'+1;
                //dbb(x,y);
                mp[x]=true;
                mp[y]=true;
                //dbb(x,y);
                grid[x].pb(y);
                break;
            }
        }
        prev=a;
    }
    topsort();
    while(!s.empty())
    {
        putchar(s.top()+64);
        s.pop();
    }
    puts("");
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

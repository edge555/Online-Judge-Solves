#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
vector<int>adj[300];
int col[300];
int bfs(int n)
{
    memset(col,-1,sizeof(col));
    queue<int>q;
    col[n]=1;
    q.push(n);
    while(!q.empty())
    {
       int u=q.front();
       q.pop();
       for (int i=0;i<adj[u].size();i++)
       {
           int v=adj[u][i];
           if(col[v]==-1)
           {
              if(col[u]==1)
                col[v]=2;
              else if(col[u]==2)
                col[v]=1;
            q.push(v);
           }
           else
           {
              if(col[u]==col[v]){
                return 1;
              }
           }
       }
    }
    return 2;
}

int main()
{
    while (1)
    {
        int n,e;
        cin>>n;
        if(n==0)
            break;
        int i,j,a,b;
        cin>>e;
        for (i=0;i<e;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int r=bfs(0);
        if(r==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;

        for (i=0;i<300;i++)
            adj[i].clear();
    }
}

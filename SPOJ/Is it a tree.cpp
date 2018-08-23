#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;
vector<int>tree[50000];
bool vis[50000];
int p,n,e;
bool dfs(int p)
{
   stack<int>s;
   s.push(p);
   int a,b,x,y,i,cnt=0;
   while(!s.empty())
   {
       cnt++;
       a=s.top();
       s.pop();
       if(vis[a]==true)
           return false;
       else
       {
           vis[a]=true;
           for (i=0;i<tree[a].size();i++)
           {
               b=tree[a][i];
               s.push(b);
           }
       }

   }
   if(cnt!=n)
        return false;
   else
        return true;
}
int main()
{
    int i,a,b;
    sff(n,e);
    for (int i=0;i<e;i++)
    {
        sff(a,b);
        tree[a].push_back(b);
    }
    for (i=0;i<=n;i++)
        vis[i]=false;
    if(dfs(1) && e==n-1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

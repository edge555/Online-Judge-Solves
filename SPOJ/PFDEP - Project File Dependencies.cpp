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
vector<int>grid[N];
map<int,int>indeg;
queue<int>q;
priority_queue<int,vector<int>,greater<int> >pq;
void topsort(int n)
{
    int i;
    rep(i,n)
    {
        if(!indeg[i])
            pq.push(i);
    }
    while(!pq.empty())
    {
        int k=pq.top();
        pq.pop();
        q.push(k);
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            indeg[p]--;
            if(!indeg[p])
                pq.push(p);
        }
    }
}
int main()
{
    int n,m;
    sff(n,m);
    int i,a,k,b;
    rep0(i,m)
    {
        sff(a,k);
        while(k--)
        {
            sf(b);
            grid[b].pb(a);
            indeg[a]++;
        }
    }
    topsort(n);
    pf("%d",q.front());
    q.pop();
    while(!q.empty())
    {
        pf(" %d",q.front());
        q.pop();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

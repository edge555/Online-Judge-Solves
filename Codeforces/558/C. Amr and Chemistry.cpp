#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int cnt[N],movee[N],vis[N];
void bfs(int k,int j)
{
    queue<pi>q;
    q.push({k,0});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int x=p.fi,y=p.se;
        if(x>N)
            continue;
        if(vis[x]==j)
            continue;
        vis[x]=j;
        movee[x]+=y;
        cnt[x]++;
        q.push({x/2,y+1});
        q.push({x*2,y+1});
    }
}
int main()
{
    int i,n,k;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        bfs(k,i+1);
    }
    int mx=1e9,ans;
    rep0(i,N)
    {
        if(cnt[i]==n && movee[i]<mx)
            mx=movee[i];
    }
    pf("%d",mx);
}

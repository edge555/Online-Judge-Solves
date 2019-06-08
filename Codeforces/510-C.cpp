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
#define N 105
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
string a[N];
vector<int>grid[N];
int indeg[N];
void topsort()
{
    int i;
    queue<int>q;
    string a="";
    rep0(i,26)
    {
        if(!indeg[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        a+=(u+'a');
        rep0(i,grid[u].size())
        {
            int v=grid[u][i];
            indeg[v]--;
            if(!indeg[v])
                q.push(v);
        }
    }
    if(a.size()==26)
        cout<<a;
    else
        puts("Impossible");
}
int main()
{
    int i,j,k,n;
    sf(n);
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        reps(j,i+1,n-1)
        {
            bool chk=false;
            rep0(k,min(a[i].size(),a[j].size()))
            {
                if(a[i][k]!=a[j][k])
                {
                    chk=true;
                    int x=a[i][k]-'a';
                    int y=a[j][k]-'a';
                    grid[x].pb(y);
                    indeg[y]++;
                    break;
                }
            }
            if(!chk && a[i].size()>a[j].size())
            {
                puts("Impossible");
                return 0;
            }
        }
    }
    topsort();
}

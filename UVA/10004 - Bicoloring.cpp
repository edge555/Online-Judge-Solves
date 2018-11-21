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
#define mem(ara) memset(ara,-1,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int color[250],i,k;
vector<int>vec[250];
bool bfs()
{
    mem(color);
    queue<int>q;
    q.push(0);
    color[0]=1;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        rep0(i,vec[p].size())
        {
            k=vec[p][i];
            if(color[k]==-1)
            {
                if(color[p]==1)
                    color[k]=2;
                else if(color[p]==2)
                    color[k]=1;
                q.push(k);
            }
            else
            {
                if(color[k]==color[p])
                    return false;
            }
        }
    }
    return true;
}
int main()
{
    int n;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int a,b,e;
        sf(e);
        rep0(i,e)
        {
            sff(a,b);
            vec[a].pb(b);
            vec[b].pb(a);
        }
        if(bfs())
            pf("BICOLORABLE.\n");
        else
            pf("NOT BICOLORABLE.\n");
        rep0(i,250)
            vec[i].clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

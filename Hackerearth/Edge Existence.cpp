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
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,m;
    sff(n,m);
    vector<int>grid[1001];
    int i,a,b;
    rep0(i,m)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }
    int q;
    sf(q);
    while(q--)
    {
        sff(a,b);
        bool chk=false;
        rep0(i,grid[a].size())
        {
            if(grid[a][i]==b)
            {
                pf("YES\n");
                chk=true;
                break;
            }
        }
        if(!chk)
            pf("NO\n");
    }
}

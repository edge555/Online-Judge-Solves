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
#define N 105
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,t=1;
map<string,int>mp;
map<int,string>mp2;
vector<int>grid[N];
map<int,int>indeg;
priority_queue<int,vector<int>,greater<int> >pq;
vector<int>vec;
void reset()
{
    mp.clear();
    mp2.clear();
    indeg.clear();
    vec.clear();
    int i;
    rep(i,n)
        grid[i].clear();
}
void topsort()
{
    int i;
    rep(i,n)
    {
        if(indeg[i]==0)
            pq.push(i);
    }
    while(!pq.empty())
    {
        int k=pq.top(),i;
        pq.pop();
        vec.pb(k);
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            indeg[p]--;
            if(indeg[p]==0)
                pq.push(p);
        }
    }
}
int main()
{
    while(~sf(n))
    {
        int i,ind=1,m;
        reset();
        string a,b;
        rep0(i,n)
        {
            cin>>a;
            mp[a]=ind;
            mp2[ind]=a;
            ind++;
        }
        sf(m);
        while(m--)
        {
            cin>>a>>b;
            int x=mp[a],y=mp[b];
            grid[x].pb(y);
            indeg[y]++;
        }
        topsort();
        pf("Case #%d: Dilbert should drink beverages in this order:",t++);
        rep0(i,vec.size())
            cout<<" "<<mp2[vec[i]];
        pf(".\n\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

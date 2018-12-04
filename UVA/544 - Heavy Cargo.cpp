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
int n,m,tc=1;
map<string,string>par;
struct edge
{
    string a,b;
    int w;
    bool operator<(const edge &p)const
    {
        return w>p.w;
    }
};
vector<edge>vec;
string findpar(string a)
{
    if(par[a]=="")
        return a;
    return par[a]=findpar(par[a]);
}
void mst(string a,string b)
{
    sort(all(vec));
    int i,mn=INT_MAX;
    rep0(i,m)
    {
        edge e=vec[i];
        string u,v;
        u=findpar(e.a);
        v=findpar(e.b);
        if(u!=v)
        {
            par[u]=v;
            if(e.w<mn)
                mn=e.w;
        }
        if(findpar(a)==findpar(b))
            break;
    }
    pf("Scenario #%d\n",tc++);
    pf("%d tons\n\n",mn);
    vec.clear();
    par.clear();
}
int main()
{
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        int i,w;
        rep0(i,m)
        {
            string a,b;
            cin>>a>>b;
            sf(w);
            edge p;
            p.a=a;
            p.b=b;
            p.w=w;
            vec.pb(p);
        }
        string a,b;
        cin>>a>>b;
        mst(a,b);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

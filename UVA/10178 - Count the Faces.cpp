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
int n,m,face;
int par[N];
map<char,int>mp;
void makeset(int n)
{
    int i;
    rep(i,n)
        par[i]=i;
    mp.clear();
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x);
    int yy=findpar(y);
    if(xx!=yy)
        par[xx]=yy;
    else
        face++;
}
int main()
{
    while(cin>>n>>m)
    {
        if(m==0)
        {
            pf("1\n");
            continue;
        }
        makeset(n);
        int i,x,y,ind=1;
        char a,b;
        face=1;
        rep0(i,m)
        {
            cin>>a>>b;
            if(mp[a]==0)
            {
                mp[a]=ind;
                ind++;
            }
            if(mp[b]==0)
            {
                mp[b]=ind;
                ind++;
            }
            dsu(mp[a],mp[b]);
        }
        pf("%d\n",face);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

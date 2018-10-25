#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define autto(mp) for(auto it=mp.begin();it!mp.end();it++)
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
map<string,int>mp;
int par[100000];
int rnk[100000],i;
int ara[100000];
void makeset(int n)
{
    for(i=1;i<=n;i++)
    {
        rnk[i]=0;
        par[i]=i;
        ara[i]=0;
    }
}
int findpar(int n)
{
    if(par[n]==n)
        return n;
    else
        return par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x),yy=findpar(y);
    if(xx==yy)
        return;
    if(rnk[xx]>rnk[yy])
        par[yy]=xx;
    else
    {
        par[xx]=yy;
        if(rnk[xx]==rnk[yy])
            rnk[yy]++;
    }
}
int main()
{
    int n,m;
    while(1)
    {
        sff(n,m);
        if(n==0 && m==0)
            return 0;
        makeset(n);
        string a,b;
        mp.clear();
        for(i=1;i<=n;i++)
        {
            cin>>a;
            mp[a]=i;
        }
        rep0(i,m)
        {
            cin>>a>>b;
            dsu(mp[a],mp[b]);
        }
        int ans=INT_MIN;
        for(i=1;i<=n;i++)
         {
             int p=findpar(i);
             ara[p]++;
             int k=ara[p];
             ans=max(ans,k);
         }
         cout<<ans<<endl;
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}

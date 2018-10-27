#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf prlong long intf
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
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<long long int,long long int>
#define pii pair<pair<long long int,long long int>,pair<long long int,long long int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
map<string,int>mp;
int ara[2000005],par[2000005],i;
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
    if(xx!=yy)
    {
        par[yy]=xx;
        ara[xx]+=ara[yy];
    }
    cout<<ara[xx]<<endl;
}
int main()
{

    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,i,k=0;
        sf(n);
        mp.clear();
        rep0(i,n)
        {
            string a,b;
            cin>>a>>b;
            if(mp.find(a)==mp.end())
            {
                par[k]=k;
                ara[k]=1;
                mp[a]=k++;
            }
            if(mp.find(b)==mp.end())
            {
                par[k]=k;
                ara[k]=1;
                mp[b]=k++;
            }
            int x=mp[a],y=mp[b];
            dsu(x,y);
        }
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}

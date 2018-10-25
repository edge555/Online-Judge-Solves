#include <bits/stdc++.h>
#include <string.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int par[100000],i;
int rnk[100000];
void start(int n)
{
    for(i=0;i<n;i++)
    {
        rnk[i]=0;
        par[i]=i;
    }
}
int findpar(int x)
{
    return par[x]==x?x:(par[x]=findpar(par[x]));
}
int dsu(int x,int y)
{
    int xx=findpar(x),yy=findpar(y);
    if(xx==yy)
        return 0;
    int a=rnk[xx],b=rnk[yy];
    if(a>b)
        par[yy]=xx;
    else
    {
        par[xx]=yy;
        if(a==b)
            rnk[yy]++;
    }
    return 1;
}
int main()
{
    int t,tc;
    scanf("%d  ",&tc);
    rep(t,tc)
    {
        string s;
        getline(cin,s);
        int lim=s[0]-'A'+1,cnt=0;
        start(lim);
        int ans=lim;
        while(getline(cin,s) && s[0])
        {
            if(s[0]=='\0')
                break;
            int x=s[0]-'A',y=s[1]-'A';
            ans-=dsu(x,y);
        }
        if(t!=1)
            cout<<endl;
        cout<<ans<<endl;
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}

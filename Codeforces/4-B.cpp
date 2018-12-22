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
int main()
{
    int m,t;
    sff(t,m);
    int i,a,b;
    vector<pi>vec;
    while(t--)
    {
        sff(a,b);
        vec.pb({a,b});
    }
    vector<int>ans;
    rep0(i,vec.size())
    {
        pi p=vec[i];
        ans.pb(p.fi);
        m-=p.fi;
    }
    if(m<0)
    {
        pf("NO");
        return 0;
    }
    rep0(i,ans.size())
    {
        if(m<=0)
            break;
        pi p=vec[i];
        int d=p.se-p.fi;
        if(m>d)
        {
            ans[i]+=d;
            m-=d;
        }
        else
        {
            ans[i]+=m;
            m=0;
        }
    }
    if(m!=0)
    {
        pf("NO");
        return 0;
    }
    pf("YES\n");
    rep0(i,ans.size())
        pf("%d ",ans[i]);
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

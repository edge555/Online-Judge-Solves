#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
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
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,tot,n,k;
        vector<int>vec[5];
        cin>>tot>>n;
        string a,b;
        rep0(i,n)
        {
            cin>>a>>b>>k;
            if(b=="Comedy")
                vec[0].pb(k);
            else if(b=="Animation")
                vec[1].pb(k);
            else if(b=="Action")
                vec[2].pb(k);
            else
                vec[3].pb(k);
        }
        int j,l,mx=-1;
        rep0(i,vec[0].size())
        {
            rep0(j,vec[1].size())
            {
                rep0(k,vec[2].size())
                {
                    rep0(l,vec[3].size())
                    {
                        int cur=vec[0][i]+vec[1][j]+vec[2][k]+vec[3][l];
                        if(cur>mx && cur<=tot)
                            mx=cur;
                        if(mx==tot)
                            break;
                    }
                }
            }
        }
        pf("Case %d: ",t);
        if(mx==-1)
            puts("Movie show canceled!");
        else
            pf("%d\n",mx);
    }
}

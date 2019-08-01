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
#define N 105
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
int ara[N][N],freq[N];
struct node
{
    int v,w;
}ans[N];
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        mem(ara,0);
        int i,n,m,q;
        sfff(n,m,q);
        rep0(i,N)
        {
            ans[i].v=0;
            ans[i].w=INT_MAX;
        }
        char c;
        int a,b,w;
        pf("Case %d:\n",t);
        getchar();
        while(q--)
        {
            cin>>c;
            if(c=='U')
            {
                cin>>a>>b>>w;
                ara[b][a]+=w;
                if(ara[b][a]>ans[b].v)
                {
                    ans[b].v=ara[b][a];
                    ans[b].w=a;
                }
                else if(ara[b][a]==ans[b].v)
                {
                    if(a<ans[b].w)
                        ans[b].w=a;
                }
            }
            else
            {
                mem(freq,0);
                int mx=-1,wn=INT_MAX;
                rep(i,m)
                {
                    if(ans[i].w==INT_MAX)
                        continue;
                    freq[ans[i].w]++;
                    if(freq[ans[i].w]>mx)
                    {
                        mx=freq[ans[i].w];
                        wn=ans[i].w;
                    }
                    else if(freq[ans[i].w]==mx)
                    {
                        if(ans[i].w<wn)
                            wn=ans[i].w;
                    }
                }
                if(wn==INT_MAX)
                    wn=1;
                pf("%d\n",wn);
            }
        }
    }
}

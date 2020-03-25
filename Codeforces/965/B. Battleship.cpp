#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 105
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int n,k,l;
int ara[N][N];
string a[N];
int main()
{
    cin>>n>>k;
    int i,j;
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        for(j=0;j<=n-k;j++)
        {
            bool f=true;
            for(l=j;l<j+k;l++)
            {
                if(a[i][l]=='#')
                {
                    f=false;
                    break;
                }
            }
            if(f)
            {
                for(l=j;l<j+k;l++)
                    ara[i][l]++;
            }
        }
    }

    rep0(j,n)
    {
        for(i=0;i<=n-k;i++)
        {
            bool f=true;
            for(l=i;l<i+k;l++)
            {
                if(a[l][j]=='#')
                {
                    f=false;
                    break;
                }
            }
            if(f)
            {
                for(l=i;l<i+k;l++)
                    ara[l][j]++;
            }
        }
    }

    int x=-1,y=-1,mx=-1;
    rep0(i,n)
    {
        rep0(j,n)
        {
            if(ara[i][j]>mx)
            {
                mx=ara[i][j];
                x=i;
                y=j;
            }
        }
    }
    pf("%d %d",x+1,y+1);
}

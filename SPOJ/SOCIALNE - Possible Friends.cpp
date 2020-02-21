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
#define N 51
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
string a[N];
int n;
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,j,k,mx=0,ind=0;
        cin>>a[0];
        n=sz(a[0]);
        rep(i,n-1)
            cin>>a[i];
        rep0(i,n)
        {
            int cnt=0;
            rep0(j,n)
            {
                if(i!=j && a[i][j]=='N')
                {
                    rep0(k,n)
                    {
                        if(a[i][k]=='Y' && a[k][j]=='Y')
                        {
                            cnt++;
                            break;
                        }
                    }
                }
            }
            if(cnt>mx)
            {
                mx=cnt;
                ind=i;
            }
        }
        pf("%d %d\n",ind,mx);
    }
}

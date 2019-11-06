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
#define N 11
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
int ara[N][N],n;
string a[N],s;
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,j,n;
        cin>>n;
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,n)
                ara[i][j]=a[i][j]-'0';
        }
        int q,x,y;
        cin>>q;
        while(q--)
        {
            cin>>s;
            if(s[0]=='t')
            {
                rep0(i,n)
                {
                    reps(j,i+1,n-1)
                        swap(ara[i][j],ara[j][i]);
                }
            }
            else if(s[0]=='i')
            {
                rep0(i,n)
                {
                    rep0(j,n)
                        ara[i][j]=(ara[i][j]+1)%10;
                }
            }
            else if(s[0]=='d')
            {
                rep0(i,n)
                {
                    rep0(j,n)
                    {
                        int r=ara[i][j]-1;
                        if(r==-1)
                            r=9;
                        ara[i][j]=r;
                    }
                }
            }
            else
            {
                cin>>x>>y;
                x--,y--;
                if(s[0]=='r')
                {
                    rep0(i,n)
                        swap(ara[x][i],ara[y][i]);
                }
                else
                {
                    rep0(i,n)
                        swap(ara[i][x],ara[i][y]);
                }
            }
        }
        pf("Case #%d\n",t);
        rep0(i,n)
        {
            rep0(j,n)
                cout<<ara[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
}

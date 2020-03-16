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
#define N 100005
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

int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,x,y,xx=-1,yy=-1;
        sff(x,y);
        bool f=false;
        if(x!=y)
        {
            xx=(x+y)>>1;
            yy=xx;
        }
        cout<<20+(xx!=-1)<<endl;
        if(xx!=-1)
            cout<<xx<<" "<<yy<<endl;
        string a="1 1\n2 2\n1 3\n3 1\n4 2\n5 1\n1 5\n2 6\n1 7\n7 1\n8 2\n2 8\n3 7\n4 8\n8 4\n7 5\n8 6\n6 8\n7 7\n8 8\n";
        cout<<a;
    }
}

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
#define N 50005
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
int n,r,c,sx,sy;
string a;
void walk()
{
    unordered_set<int>st[r+1];
    st[sx].insert(sy);
    int i,x,y;
    rep0(i,n)
    {
        x=0,y=0;
        switch(a[i])
        {
            case 'E':
                y++;
                break;
            case 'W':
                y--;
                break;
            case 'N':
                x--;
                break;
            case 'S':
                x++;
                break;
        }
        sx+=x;
        sy+=y;
        while(st[sx].find(sy)!=st[sx].end())
        {
            sx+=x;
            sy+=y;
        }
        st[sx].insert(sy);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sfff(n,r,c);
        sff(sx,sy);
        cin>>a;
        walk();
        pf("Case #%d: %d %d\n",t,sx,sy);
    }
}

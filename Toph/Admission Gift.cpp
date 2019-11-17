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
    fflush(stdout);
    int i,n,k,mx=-1;
    cin>>n;
    string a;
    rep0(i,n)
    {
        cin>>k;
        int h=0,f=0,t=0,o=0;
        h=k/152;
        k-=h*152;
        f=k/53;
        k-=f*53;
        t=k/7;
        k-=t*7;
        o=k/1;
        k-=o;
        mx=max(mx,h+f+t+o);
        cout<<h+f+t+o<<endl;
        fflush(stdout);
        while(h--)
        {
            cout<<"152 ";
            fflush(stdout);
        }
        while(f--)
        {
            cout<<"53 ";
            fflush(stdout);
        }
        while(t--)
        {
            cout<<"7 ";
            fflush(stdout);
        }
        while(o--)
        {
            cout<<"1 ";
            fflush(stdout);
        }
        cout<<endl;
        fflush(stdout);
        cin>>a;
    }
}

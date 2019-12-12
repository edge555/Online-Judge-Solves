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
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a;
        cin>>a;
        int i,u=0,d=0,l=0,r=0;
        rep0(i,sz(a))
        {
            if(a[i]=='U')
                u++;
            else if(a[i]=='D')
                d++;
            else if(a[i]=='L')
                l++;
            else
                r++;
        }
        int mn1=min(u,d);
        int mn2=min(l,r);
        if(mn1==0 && mn2==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(mn1==0 && mn2!=0)
        {
            cout<<"2\nLR"<<endl;
            continue;
        }
        if(mn1!=0 && mn2==0)
        {
            cout<<"2\nUD"<<endl;
            continue;
        }
        cout<<mn1*2+mn2*2<<endl;
        rep0(i,mn1)
            cout<<"D";
        rep0(i,mn2)
            cout<<"R";
         rep0(i,mn1)
            cout<<"U";
        rep0(i,mn2)
            cout<<"L";
        cout<<endl;
    }
}

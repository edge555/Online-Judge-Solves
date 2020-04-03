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
    int i,n,len;
    string a,b,c,d;
    vector<string>vec;
    cin>>n;
    rep0(i,n)
    {
        cin>>a;
        c=a;
        a+=a;
        vec.pb(a);
    }
    b=c;
    len=sz(b);
    int ans=1e9;
    bool f=true;
    do{
        b.pb(b[0]);
        b.erase(b.begin());
        int j,res=0;
        rep0(i,n)
        {
            int cnt=0;
            a=vec[i];
            bool chk=false;
            for(j=0;j<len;j++)
            {
                if(a.substr(j,len)==b)
                {
                    chk=true;
                    break;
                }
                cnt++;
            }
            if(!chk)
                f=false;
            res+=cnt;
        }
        ans=min(ans,res);
    }while(b!=c);
    if(!f)
        ans=-1;
    cout<<ans;
}

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
    cin>>tc;
    rep(t,tc)
    {
        int fail=0,k,sub;
        double ans=0,cred=0,a,b;
        cin>>k;
        while(k--)
        {
            cin>>a>>b;
            if(a>=80)
                ans+=4*(double)b;
            else if(a>=75)
                ans+=3.75*(double)b;
            else if(a>=70)
                ans+=3.5*(double)b;
            else if(a>=65)
                ans+=3.25*(double)b;
            else if(a>=60)
                ans+=3*(double)b;
            else if(a>=55)
                ans+=2.75*(double)b;
            else if(a>=50)
                ans+=2.5*(double)b;
            else if(a>=45)
                ans+=2.25*(double)b;
            else if(a>=40)
                ans+=2*(double)b;
            else
                fail++;
            cred+=b;
        }
        printf("Case %d: ",t);
        if(fail)
        {
            if(fail==1)
                puts("Sorry, you have failed in 1 course!");
            else
                pf("Sorry, you have failed in %d courses!\n",fail);
        }
        else
        {
            ans/=cred;
            cout<<setprecision(2)<<fixed<<ans<<endl;
        }
    }
}

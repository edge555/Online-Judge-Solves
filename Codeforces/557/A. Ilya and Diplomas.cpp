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
int main()
{
   int i,n,a[7],ans[4];
   sf(n);
   rep0(i,6)
       sf(a[i]);
   ans[0]=a[0];
   ans[1]=a[2];
   ans[2]=a[4];
   int taken=a[0]+a[2]+a[4];
   int left=n-taken;
   int mn=min(left,a[1]-a[0]);
   ans[0]+=mn;
   taken+=mn;
   left-=mn;
   mn=min(left,a[3]-a[2]);
   ans[1]+=mn;
   taken+=mn;
   left-=mn;
   mn=min(left,a[5]-a[4]);
   ans[2]+=mn;
   taken+=mn;
   left-=mn;
   pf("%d %d %d",ans[0],ans[1],ans[2]);
}

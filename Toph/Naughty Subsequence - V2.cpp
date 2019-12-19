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
int lids(int ara[],int n)
{
   int i,j,lis[n];
   rep0(i,n)
      lis[i]=1;
   rep(i,n-1)
   {
        rep0(j,i-1)
        {
            if(ara[i]>ara[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
   }
   int lds[n];
   rep0(i,n)
      lds[i]=1;
   for(i=n-2;i>=0;i--)
   {
      for(j=n-1;j>i;j--)
      {
         if(ara[i]>ara[j] && lds[i]<lds[j]+1)
            lds[i]=lds[j]+1;
      }
   }
   int mx=lis[0]+lds[0]-1;
   rep(i,n-1)
   {
        if(lis[i]+lds[i]-1>mx)
            mx=lis[i]+lds[i]-1;
   }
   return mx;
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,n;
        char ch;
        cin>>n;
        int ara[n];
        rep0(i,n)
        {
            cin>>ch;
            ara[i]=ch-'A';
        }
        cout<<lids(ara,n)<<endl;
    }
}

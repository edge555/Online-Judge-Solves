#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
   int n,a,b,i,k;
   cin>>n>>a>>b;
   deque<int>dq;
   rep0(i,n)
   {
       sf(k);
       dq.pb(k);
   }
   int ans=0;
   while(dq.size()>1)
   {
       int x=dq.front();
       int y=dq.back();
       if((x==0 && y==1) || (x==1 && y==0))
       {
            puts("-1");
            return 0;
       }
       else if((x==0 && y==2) || (x==2 && y==0))
            ans+=a;
       else if((x==1 && y==2) || (x==2 && y==1))
            ans+=b;
       else if(x==2 && y==2)
            ans+=(2*min(a,b));
       dq.pop_back();
       dq.pop_front();
   }
   if(!dq.empty())
   {
       if(dq.front()==2)
            ans+=min(a,b);
   }
   cout<<ans;
}

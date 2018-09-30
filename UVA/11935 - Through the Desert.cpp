
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
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
double cost,ans;
int main()
{
    string a,b,c;
    while(1)
    {
        int x,y;
        cin>>x>>a>>b>>y;
        if(x+y==0)
            return 0;
        int n,now=0,l=0,prev=0,p;
        cost=0.0,ans=0.0;
        while(1)
        {
            cin>>now>>c;
            p=now-prev;
            cost+=((p*(y/100.0))+(p*l));
            ans=max(ans,cost);
            if(c=="Goal")
                break;
            else if(c=="Fuel")
                cin>>b>>y;
            else if(c=="Mechanic")
                l=0;
            else if(c=="Leak")
                l++;
            else if(c=="Gas")
            {
                cin>>b;
                cost=0.0;
            }
           prev=now;
        }
        pf("%.3f\n",ans);
    }
}

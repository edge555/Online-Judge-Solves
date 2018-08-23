#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lf",&num)
#define sff(num1,num2) scanf("%lf %lf",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        double x,y,xx,yy,r;
        cin>>x>>y>>xx>>yy>>r;

        double x1,y1;
        x1=(x+xx)/2.0;
        y1=(y+yy)/2.0;
        double t1=(x-x1)*(x-x1);
        double t2=(y-y1)*(y-y1);

        double dis=sqrt(t1+t2);
        //db(dis);
        pf("%.2f %.2f %.2f\n",x1,y1,dis+r);
    }
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define pi 2*acos(0.0)
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    double x,y,z,t,c,C,p,P,r,R;
    {
        while(cin>>x>>y>>z)
        {
            P=x+y+z;
            p=P/2;
            t=sqrt(p*(p-x)*(p-y)*(p-z));
            r=2*t/P;
            c=pi*r*r;
            R=(x*y*z)/sqrt((x+z+y)*(x+y-z)*(x-y+z)*(-x+z+y));
            C=pi*R*R;
            pf("%.4lf %.4lf %.4lf\n",C-t,t-c,c);
        }
    }
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
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
    int tc,j;
    sf(tc);
    for (j=1;j<=tc;j++)
    {
        int a,b,c,d,aa,bb,cc,dd;
        sff(a,b);
        sff(c,d);
        sff(aa,bb);
        sff(cc,dd);

        int x1,y1,x2,y2;
        x2=max(a,aa);
        y2=max(b,bb);
        x1=min(c,cc);
        y1=min(d,dd);

        int asec,aweak,area1,area2,area;
        area1=(c-a)*(d-b);
        area2=(cc-aa)*(dd-bb);
        asec=(x2-x1)*(y2-y1);
        if(x2>=x1 || y2>=y1)
        {
            asec=0;
            aweak=area1+area2;
            area=10000-area1-area2;
        }
        else
        {
            aweak=area1+area2-(2*asec);
            area=10000-area1-area2+asec;
        }
        pf("Night %d: %d %d %d\n",j,asec,aweak,area);
    }
}

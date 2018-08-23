#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;

int main()
{
    int n,sx,sy,ex,ey,i;
    sf(n);
    sff(sx,sy);sff(ex,ey);
    string a;
    cin>>a;
    for (i=0;i<a.size();i++)
    {
        if(a[i]=='N' && sy<ey)
            sy++;
        else if(a[i]=='S' && sy>ey)
            sy--;
        else if(a[i]=='E' && sx<ex)
            sx++;
        else if(a[i]=='W' && sx>ex)
            sx--;
        if(sx==ex && sy==ey)
        {
            cout<<i+1;
            return 0;
        }
    }
    pf("-1");
}

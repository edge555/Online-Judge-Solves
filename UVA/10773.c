#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int main ()
{
    float n,d,u,v,r,i,st,sd,t;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>d>>v>>u;
        if (v>=u || u==0 || v==0)
            cout<<"Case "<<i<<": can't determine"<<endl;
        else if (v<u)
            {
            r=(u*u)-(v*v);
            sd=d/(sqrt(r));
            st=d/(u*1.0);
            t=st-sd;
            if (t<0)
                t=t*(-1.0);
            printf ("Case %0.0f: %0.3f\n",i,t);
            }
    }
    return 0;
}

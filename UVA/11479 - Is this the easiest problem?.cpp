#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int j,t;
    sf(t);
    for (j=1;j<=t;j++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b<=c || b+c<=a || c+a<=b) || (a<=0 || b<=0 || c<=0))
            pf("Case %d: Invalid\n",j);
        else
        {
            set<ll>st;
            st.insert(a);
            st.insert(b);
            st.insert(c);
            if(st.size()==1)
                pf("Case %d: Equilateral\n",j);
            else if(st.size()==2)
                pf("Case %d: Isosceles\n",j);
            else
                pf("Case %d: Scalene\n",j);
        }
    }
}

#include <bits/stdc++.h>

#define pb push_back
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
int fib[1000005],i;
int main()
{
    set<int>st;
    fib[0]=0;
    fib[1]=1;
    st.insert(fib[0]);
    st.insert(fib[1]);
    for (i=2;i<30;i++){
        fib[i]=fib[i-1]+fib[i-2];
        st.insert(fib[i]);
    }

    int n,i,j;
    sf(n);
    for (j=1;j<=n;j++)
    {
        int b=0,r=0;
        string a;
        cin>>a;
        for (int p=0;p<a.size();p++)
        {
            if(st.find(p)==st.end())
            {
                if(a[p]=='B')
                    b++;
                else
                    r++;
            }
        }

        if(b>r)
            pf("Case #%d: Aaj Kemon Bodh Korcho\n",j);
        else if (r>b)
            pf("Case #%d: Hala Madrid\n",j);
        else{
            pf("Case #%d: Meh :\\",j);
            pf("\n");
        }
    }
}

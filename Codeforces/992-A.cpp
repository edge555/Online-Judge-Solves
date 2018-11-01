#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;

int main()
{
    int k,a,cnt=0;
    set<int>st;
    cin>>k;
    while(k--)
    {
        cin>>a;
        st.insert(a);
        if(a==0)
            cnt++;
    }
    if(cnt>0)
        cout<<st.size()-1<<endl;
    else
        cout<<st.size()<<endl;
}

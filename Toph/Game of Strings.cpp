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
    int n,k;
    set<string>st;
    set<string>::iterator it;
    sf(n);
    string a;
    while(n--)
    {
        cin>>a;
        st.insert(a);
    }
    sf(k);
    string res="";
    if(st.size()<k)
    {
        for (it=st.begin();it!=st.end();it++)
            res+=*it;
    }
    else
    {
        int cnt=0;
        for (it=st.begin();cnt!=k;it++)
        {
            res+=*it;
            cnt++;
        }
    }
    cout<<res<<endl;
}

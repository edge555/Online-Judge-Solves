#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    string c="frieza";
    set<char>st;
    for (i=0;i<c.size();i++)
        st.insert(c[i]);

    while(t--)
    {
        string a,b="";
        cin>>a;
        for (i=0;i<a.size();i++)
            b.push_back('0');
        for(i=0;i<a.size();i++)
        {
            if(st.find(a[i])==st.end())
                b[i]='1';
        }
        for (i=0;i<b.size();)
        {
            int cnt=0;
            char ch=b[i];
            while (b[i]==ch)
            {
               cnt++;
               i++;
            }
            cout<<cnt;
        }
        cout<<endl;
    }
}

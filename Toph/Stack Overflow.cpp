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
vector<list<int> >s;
int main()
{
    int t,j;
    sf(t);
    for (j=1;j<=t;j++)
    {
        pf("Case %d:\n",j);
        int n,q,i;
        sff(n,q);
        s.resize(n);
        while(q--)
        {
            int a,b;
            string str;
            cin>>str;
            if(str=="push")
            {
                sff(a,b);
                a--;
                s[a].push_back(b);
            }
            else if(str=="top")
            {
                sf(a);
                a--;
                if(s[a].begin()!=s[a].end())
                    cout<<s[a].back()<<endl;
                else
                    puts("Empty!");
            }
            else if(str=="pop")
            {
                sf(a);
                a--;
                if(s[a].begin()!=s[a].end())
                    s[a].pop_back();
            }
            else
            {
                sff(a,b);
                a--;b--;
                s[a].splice(s[a].end(),s[b]);
            }
        }
        s.clear();
    }
}

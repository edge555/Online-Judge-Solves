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
typedef long long ll;
using namespace std;

int main()
{
    int n;
    sf(n);
    stack<int>s;
    multiset<int>st;
    multiset<int>::iterator it;
    while(n--)
    {
       int a,b;
       sff(a,b);
       if(a==1)
       {
           s.push(b);
           st.insert(b);
       }
       else
       {
          it=st.find(b);
          if(it==st.end())
              pf("Sorry\n");
          else
          {
              int cnt=1;
              while(s.top()!=b)
              {
                 it=st.find(s.top());
                 st.erase(it);
                 cnt++;
                 s.pop();
              }
              it=st.find(s.top());
              st.erase(it);
              s.pop();
              printf("%d\n",cnt);
          }
       }
    }
}

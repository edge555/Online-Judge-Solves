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
    int n,flag,x,i;
    while(1)
    {
        sf(n);
        if(n==0)
            break;
        flag=1;
        stack<int>s;
        vector<int>vec;
        for(i=0;i<n;++i)
        {
            sf(x);
            while(s.size()!=0 && s.top()<x)
            {
                vec.push_back(s.top());
                s.pop();
            }
            s.push(x);
        }
        while(!s.empty())
        {
            vec.push_back(s.top());
            s.pop();
        }
        for(i=0;i<vec.size();++i)
        {
            if(vec[i]!=i+1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            puts("yes");
        else
            puts("no");
   }
}

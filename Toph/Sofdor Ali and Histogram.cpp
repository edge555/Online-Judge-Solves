#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%lld",&num)
#define in2(num1,num2) scanf("%lld %lld",&num1,&num2)
typedef long long ll;
using namespace std;

ll ara[100000001];
ll hist(ll k)
{
    stack<ll>s;
    ll top,i=0,maxarea=0,toparea;
    while (i<k)
    {
       if (s.empty() || ara[s.top()]<=ara[i]){
         s.push(i);
         i++;
    }
    else
    {
        top=s.top();
        s.pop();
        toparea=ara[top] * (s.empty()? i : i-s.top()-1);
        maxarea=max(toparea,maxarea);
    }
    }
    while (!s.empty())
    {
        top=s.top();
        s.pop();
        toparea=ara[top]*(s.empty()?i:i-s.top()-1);
        maxarea=max(maxarea,toparea);
    }
    return maxarea;
}
int main()
{
    ll n,i,k,j;
    in1(k);
    for (j=1;j<=k;j++){
    in1(n);
    for (i=0;i<n;i++)
        in1(ara[i]);
    ll res=hist(n);
    pf("Case %lld: %lld\n",j,res);
    }
}

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
    int n,m,i,x;
    vector<int>vec;
    sff(n,m);
    deque<int>dq;
    while(n--)
    {
        cin>>x;
        vec.push_back(x);
    }
    while(m--)
    {
        sf(x);
        dq.push_back(x);
    }
    int k,cnt=0;
    for (i=0;i<vec.size();i++)
    {
        k=dq.front();
        if (vec[i]<=k)
        {
            if (dq.size()==0)
                break;
            dq.pop_front();
            cnt++;
        }
    }
    pf("%d\n",cnt);
}

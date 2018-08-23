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
    int n,q;
    sff(n,q);
    vector<int>vec[n+1];
    while(q--)
    {
        int a,b;
        sff(a,b);
        a--;b--;
        if((find(vec[a].begin(),vec[a].end(),b)!=vec[a].end()) || (find(vec[b].begin(),vec[b].end(),a)!=vec[b].end()))
            puts("old");
        else
        {
            puts("new");
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
    }
}

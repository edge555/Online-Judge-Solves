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
    int ara[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,i;
    bool chk=false;
    cin>>n;
    for (i=0;i<14;i++)
    {
        if (n%ara[i]==0){
            chk=true;
            break;
        }
    }
    if(chk)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

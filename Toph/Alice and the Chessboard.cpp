#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b==c+d)
            cout<<"Yes"<<endl;
        else if((abs(a-c))==(abs(b-d)))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}

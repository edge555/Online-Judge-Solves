#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int n,ans=0;
        cin>>n;
        int ara[n+1],i;
        for (i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);

        int med=ara[n/2];
        for (i=0;i<n;i++)
            ans+=abs(med-ara[i]);

        cout<<ans<<endl;
    }
}

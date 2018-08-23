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
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string a,b="";
        getline(cin,a);

        int i,sum=0,sum2=0;
        for (i=0;i<a.size();i++)
        {
            if(a[i]!=' ')
                b.push_back(a[i]);
        }
        for (i=0;i<b.size();i++)
        {
            int k=(b[i]-48);
            if(i%2==0)
            {
                k*=2;
                while(k!=0)
                {
                   sum+=k%10;
                   k/=10;
                }
            }
            else
                sum2+=k;
        }

        int p=sum+sum2;

        if(p%10==0)
            pf("Valid\n");
        else
            pf("Invalid\n");
    }
}

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
    int n,last,k,cs=1;
    string ara[101];
    string a;
    cin>>n;
    while(n--)
    {
        last=0,k=0;
        ara[0]="http://www.lightoj.com/";
        pf("Case %d:\n",cs);
        cs++;
        while(cin>>a)
        {
            if(a=="QUIT")
                break;
            else if(a=="VISIT")
            {
                cin>>a;
                cout<<a<<endl;
                k++;
                ara[k]=a;
                last=k;
            }
            else if(a=="FORWARD")
            {
                if(k+1>last)
                    cout<<"Ignored"<<endl;
                else {
                    k++;
                    cout<<ara[k]<<endl;
                }
            }
            else if(a=="BACK")
            {
                if(k-1<0)
                    cout<<"Ignored"<<endl;
                else
                {
                    k--;
                    cout<<ara[k]<<endl;
                }
            }
        }
    }
}

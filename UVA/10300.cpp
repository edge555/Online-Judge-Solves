#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,t,n,i,j,k,sum;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>n;
       {
        for (j=0,sum=0;j<n;j++)
        {
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
       }
    }
    return 0;
}

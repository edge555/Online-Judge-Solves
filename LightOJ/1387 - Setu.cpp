#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,t,k,a,sum;
    string str;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=0;
        cin>>a;
        cout<<"Case "<<i<<":\n";
        for(j=0;j<a;j++)
        {
            cin>>str;
            if(str=="report")
            {
               cout<<sum<<"\n";
               continue;
            }
            cin>>k;
            if(str=="donate")
                sum+=k;
        }
    }
    return 0;
}

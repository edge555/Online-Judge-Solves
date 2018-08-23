#include <iostream>
using namespace std;
int main ()
{
    int a,b,t,i,ara[10000],ara2[10000],sum1,sum2,j,k;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>a>>b;
        for(k=0,sum1=0;k<a;k++)
        {
            cin>>ara[k];
            sum1+=ara[k];
        }
        for(j=0,sum2=0;j<b;j++)
        {
            cin>>ara2[j];
            sum2+=ara2[j];
        }
        if (sum1<sum2)
            cout<<"Death"<<endl;
        else
            cout<<"Snow"<<endl;

    }
    return 0;
}

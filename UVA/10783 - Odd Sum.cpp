#include <iostream>
using namespace std;
int main ()
{
    int n,i,a,b,sum=0,j;
    cin>>n;

    for (i=1;i<=n;i++)
    {
        cin>>a>>b;
        for (j=a;j<=b;j++)
        {
            if (j%2==1)
                sum+=j;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
    }
    return 0;
}

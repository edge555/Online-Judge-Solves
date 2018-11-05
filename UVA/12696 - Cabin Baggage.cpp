#include <iostream>
using namespace std;
int main ()
{
    double n,sum,a,b,c,w,k=0,i;
    cin>>n;

    for (i=0;i<n;i++)
    {
       cin>>a>>b>>c>>w;
       sum=a+b+c;
       if (((a<=56 && b<=45 && c<=25)||(sum<=125)) && w<=7)
       {
           cout<<"1"<<endl;
           k++;
       }
       else
           cout<<"0"<<endl;
    }
    cout<<k<<endl;
}

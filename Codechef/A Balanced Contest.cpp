#include <iostream>
using namespace std;
int main ()
{
    int n,i,j,k,cw,hr,pn,ara[1000],c,p,h;
    cin>>n;
    for (i=0,cw=0,hr=0;i<n;i++)
    {
        cin>>pn>>p;
        c=p/2;
        h=p/10;
        for (j=0;j<pn;j++)
        {
            cin>>ara[j];
            if (ara[j]>=c)
                cw++;
            else if (ara[j]<=h)
                hr++;

        }
        if (cw==1 && hr==2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        cw=0;
        hr=0;
    }
    return 0;

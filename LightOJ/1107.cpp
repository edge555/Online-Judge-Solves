#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,x1,y1,x2,y2,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;
        cin>>n;

        while(n--)
        {
        cin>>x>>y;

        if(x>x1 && y>y1 && y<y2 && x<x2 )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        }
    }

}

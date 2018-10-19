#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x;
    for (y=1;y<=x;y++)
    {
        int n,B=0,W=0,A=0,D=0,i;
        cin>>n;
        for (i=0;i<n;i++)
        {
            char ch;
            cin>>ch;
            switch (ch)
            {
            case 'B':
                B++;
                break;
            case 'W':
                W++;
                break;
            case 'A':
                A++;
                break;
            default:
                D++;
                break;
            }
        }

        cout <<"Case "<<y<<": ";

        if (A==n)
            cout<<"ABANDONED";
        else if (B==W)
            cout<<"DRAW "<<B<<' '<<D;
        else if (W+A==n)
            cout<<"WHITEWASH";
        else if (B+A==n)
            cout<<"BANGLAWASH";
        else
        {
            if (B>W)
                cout<<"BANGLADESH "<<B<<" - "<<W;
            else
                cout<<"WWW "<<W<<" - "<<B;
        }
        cout<<endl;
    }
   return 0;
}

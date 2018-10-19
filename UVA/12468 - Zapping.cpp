#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while (1)
    {
        cin>>a>>b;
        if (a==-1 && b==-1)
          break;
        else
        {
            int x,y,min;
            x=abs(a-b);
            y=abs(100+a-b);
            min=(x<y)?x:y;
            cout<<min<<endl;
        }
    }
}

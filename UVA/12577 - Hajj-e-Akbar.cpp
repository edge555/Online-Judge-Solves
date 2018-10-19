#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a="";
    int i=1;
    while (1)
    {
        cin>>a;
        if (a[0]=='*')
            return 0;
        printf ("Case %d: ",i);
        i++;
        if (a[0]=='H')
            cout<<"Hajj-e-Akbar"<<endl;
        else if (a[0]=='U')
            cout<<"Hajj-e-Asghar"<<endl;
    }
}

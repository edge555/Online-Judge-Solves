#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,i,r,c=1;
    cin>>n;
    while (c*5<n)
    {
        n-=c*5;
        c*=2;
    }
    int l=(n-1)/c;
    switch (l)
    {
        case 0:
            cout<<"Sheldon"<<endl;
            break;
        case 1:
            cout<<"Leonard"<<endl;
            break;
        case 2:
            cout<<"Penny"<<endl;
            break;
        case 3:
            cout<<"Rajesh"<<endl;
            break;
        case 4:
            cout<<"Howard"<<endl;
            break;
    }
}

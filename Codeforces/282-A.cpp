#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int main()
{
    int x=0,n;
    char ara[10000];
    cin>>n;
    while (n--)
    {
       cin>>ara;
       if (ara[0]=='+' && ara[2]=='X')
            ++x;
       else if (ara[0]=='-' && ara[2]=='X')
            --x;
       else if (ara[0]=='X' && ara[2]=='+')
            x++;
       else if (ara[0]=='X' && ara[2]=='-')
            x--;
    }
    cout<<x;
}

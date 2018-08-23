#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1 || n==4 || n==6)
            puts("NO");
        else
            puts("YES");
    }
}

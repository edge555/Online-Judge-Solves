#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        long long int n;
        cin>>n;
        if (n<0)
            break;
        cout<<((n*(n+1))/2)+1<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,l,m;
    while (scanf ("%d %d",&a,&b)==2)
    {
        k=a;
        l=a;
        while(l>=b)
        {
            a=l/b;
            k+=a;
            l=a+(l%b);
        }
        cout<<k<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k=0,l,m,n;
    while (scanf ("%d %d",&a,&b)==2){
    m=a;
    l=a;
    while (l>=b)
    {
        a=l/b;
        k+=a;
        l=a+(l%b);
    }
    cout<<k+m<<endl;
    k=0;
    }
}

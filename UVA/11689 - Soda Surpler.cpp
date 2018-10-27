#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--){
    int a,b,k=0,l,m;
    cin>>a>>m>>b;
    l=a+m;
    while (l>=b)
    {
        a=l/b;
        k+=a;
        l=a+(l%b);
    }
    cout<<k<<endl;
    }
}

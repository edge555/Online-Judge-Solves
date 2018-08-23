#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    char ch;

    while(scanf ("%lld %c %lld",&a,&ch,&b)==3){
        if (ch=='%')
            cout<<a%b<<endl;
        else
            cout<<a/b<<endl;
    }
}

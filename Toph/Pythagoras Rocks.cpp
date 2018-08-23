#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    scanf ("%lld %lld %lld",&a,&b,&c);
    if (sqrt((a*a)+(b*b))==c){
        printf ("%d\n",c);
        return 0;
    }
    else if (sqrt((a*a)+(c*c))==b){
            printf ("%d\n",b);
            return 0;
    }
    else
        printf ("%d\n",a);

}

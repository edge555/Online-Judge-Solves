#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n,k,m,l,i;
    in1(i);
    while (i--){
    in1(n);
    int ara[100000];
    scanf("%d",&ara[0]);
    m=ara[0];
    l=ara[0];
    for (k=1;k<n;k++){
        scanf("%d",&ara[k]);
        if (ara[k]>m)
            m=ara[k];
        else if (ara[k]<l)
            l=ara[k];
    }
    pf("%d\n",m-l);
    }
}


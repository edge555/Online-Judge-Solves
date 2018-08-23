#include <bits/stdc++.h>
using namespace std;
int prime[10000001];
int main()
{
    int n,i,j;
    cin>>n;
    for (j=1;j<=n;j++)
    {
        string a;
        cin>>a;
        int sum=0;
        for (i=0;i<a.size();i++)
            sum+=(a[i]-'0');
        if((sum%2==1 && a.size()%2==1)||(sum%2==0 && a.size()%2==0))
            printf ("Case %d: Safe to push\n",j);
        else
            printf ("Case %d: BOOM\n",j);
    }
}

#include <bits/stdc++.h>
using namespace std;
struct act
{
    int st;
    int fn;
}s[100001];

bool func(act a,act b)
{
    return (a.fn < b.fn);
}
void acu(act a[],int n)
{
    int i=0,j,cnt=0;
    sort (a,a+n,func);

    for (j=1;j<n;j++)
    {
        if (a[j].st>a[i].fn)
        {
            cnt++;
            i=j;
        }
    }
    cout<<++cnt;
}
int main()
{
    int n,i;
    cin>>n;

    for (i=0;i<n;i++)
        cin>>s[i].st>>s[i].fn;
    acu(s,n);
}

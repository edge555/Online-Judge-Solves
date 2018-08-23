#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int chk(char c)
{
   if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
   else
        return false;
}
int main()
{
    string a="";
    cin>>a;
    int i,v=0;
    for (i=0;i<a.size();i++)
    {
        if (chk(a[i]))
            v++;
    }
    pf("%d\n",v);
}

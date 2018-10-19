
#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;

string sum(string ara,string ara2)
{
    string res="";
    if (ara.length()>ara2.length())
        swap(ara,ara2);

    int l1,l2;
    l1=ara.length();
    l2=ara2.length();

    reverse(ara.begin(),ara.end());
    reverse(ara2.begin(),ara2.end());

    int i,sum,carry=0;
    for (i=0;i<l1;i++)
    {
        sum=((ara[i]-'0')+(ara2[i]-'0')+carry);
        res.push_back((sum%10)+'0');
        carry=sum/10;
    }
    for (i=l1;i<l2;i++)
    {
        sum=(ara2[i]-'0')+carry;
        res.push_back((sum%10)+'0');
        carry=sum/10;
    }
    if (carry!=0)
        res.push_back(carry+'0');
    reverse (res.begin(),res.end());
    return res;
}
int main()
{
    bool chk=true;
    string a,b,k;
    while(1)
    {
        cin>>a;
        if(a[0]=='0')
            break;
        if(chk)
        {
           b=a;
           chk=false;
        }
        else
            b=sum(a,b);
    }
    cout<<b<<endl;
}

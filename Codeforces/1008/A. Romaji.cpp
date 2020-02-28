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
bool vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    int i,k=a.size();
    bool chk=true;

    for(i=0;i<k;i++)
    {
        if(a[i]=='n' || vowel(a[i]))
            continue;
        else if(i==k-1 || vowel(a[i+1])==false)
        {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
}

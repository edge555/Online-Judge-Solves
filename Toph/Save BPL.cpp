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
typedef long long ll;
using namespace std;
char s[20000];

int getsum(string a)
{
    int cnt=0,i;
    for(i=0;i<a.size();i++)
        cnt+=a[i]-'a';

    return cnt+15;
}

int main()
{
    FAST;
    int n,sum=0,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        string a="",chk="zzzzzzzzzzzzzzz";
        int k=strlen(s),j;

        for(j=0;j<k+20;j++)
        {
            a+=s[j%k];
            if(a.size()>15)
                a.erase(a.begin());

            if(a.size()==15)
            {
                if(a<=chk)
                    chk=a;
                //cout<<chK<<endl;
            }
        }
        //cout<<chk<<endl;
        sum+=getsum(chk);
    }
    cout<<sum<<endl;
    sum=0;
}

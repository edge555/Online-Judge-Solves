#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    int i;
    b=a;
    bool chk=false,res=false;
    for (i=0;i<b.size()-1;i++)
    {
        if(b[i]=='A')
        {
            if(b[i+1]=='B')
            {
                b[i]='z';
                i++;
                b[i]='z';
                chk=true;
            }
        }
    }
    for (i=0;i<b.size()-1;i++)
    {
        if(b[i]=='B')
        {
            if(b[i+1]=='A')
            {
                if(chk==true)
                    res=true;

            }
        }
    }
    if(res==true)
    {
        puts("YES");
        return 0;
    }
    else
    {
        chk=false,res=false;
        for (i=0;i<a.size()-1;i++)
        {
            if(a[i]=='B')
            {
                if(a[i+1]=='A')
                {
                    a[i]='z';
                    i++;
                    a[i]='z';
                    chk=true;
                }
            }
        }
        for (i=0;i<a.size()-1;i++)
        {
            if(a[i]=='A')
            {
                if(a[i+1]=='B')
                {
                    if(chk==true)
                        res=true;
                }
            }
        }
        if(res)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}

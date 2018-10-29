#include <bits/stdc++.h>
#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf("%d %d",&n,&m)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
using namespace std;
int main()
{
    int tc;
    sf(tc);
    while(tc--)
    {
        string a;
        cin>>a;
        int i,cnt=0;
        if(a.size()==5)
            puts("3");
        else
        {
            if(a=="one")
                puts("1");
            else if(a=="two")
                puts("2");
            else
            {
                if(a[0]=='t' && a[2]=='o')
                    cnt++;
                else if(a[1]=='w' && a[2]=='o')
                    cnt++;
                else if(a[0]=='t' && a[1]=='w')
                    cnt++;
                if(cnt==1)
                    puts("2");
                else
                    puts("1");
            }

        }
    }
}

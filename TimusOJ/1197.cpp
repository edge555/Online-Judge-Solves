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
int dxh[] = { -2, -2, -1, 1, 2, 2, 1, -1 };
int dyh[] = { -1, 1, 2, 2, 1, -1, -2, -2 };
int main()
{
    int tc;
    cin>>tc;
    getchar();
    while(tc--)
    {
        string s;
        cin>>s;
        int x=s[0]-97,i;
        int y=s[1]-49,cnt=0;
        for (i=0;i<8;i++)
        {
            int a,b;
            a=x+dxh[i];
            b=y+dyh[i];
            if(a>=0 && a<8 && b>=0 && b<8)
                cnt++;
        }
        pf("%d\n",cnt);
    }
}

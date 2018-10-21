#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara,vl) memset(ara,vl,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[300007];

int main()
{
    int t,test;
    sf(test);
    rep(t,test)
    {
        mem(ara,0);
        int seg=1,n,i;
        sf(n);
        rep0(i,n)
            sf(ara[i]);

        int a=ara[0],b=-1;
        for(i=1;i<n;i++)
        {
            if(a<=ara[i])
                a=ara[i];
            else
            {
                seg++;
                if(seg==2)
                    b=i;
                a=ara[i];
            }
        }
        if(seg==1)
            puts("YES");
        else if(seg>2)
            puts("NO");
        else
        {
            if(ara[0]>=ara[n-1])
                puts("YES");
            else
                puts("NO");
        }
    }
}

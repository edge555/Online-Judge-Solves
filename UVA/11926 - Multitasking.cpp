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
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[1000001];
int main()
{
    int n,m;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        int i,j;
        memset(ara,0,sizeof(ara));
        bool chk=false;
        int x,y;
        while(n--)
        {
            sff(x,y);
            if(!chk)
            {
                for(j=x+1;j<=y;j++)
                {
                    if(ara[j]==0)
                        ara[j]=1;
                    else
                    {
                        chk=true;
                        break;
                    }
                }
            }
        }
        while(m--)
        {
            int a,b,r;
            sff(a,b);
            sf(r);
            int st=a,fin=b;
            if(!chk)
            {
                while(1)
                {
                    for(j=st+1;j<=fin;j++)
                    {
                        if(ara[j]==0)
                            ara[j]=1;
                        else
                        {
                            chk=true;
                            break;
                        }
                    }
                    st+=r;
                    if(st>1000000)
                        break;
                    fin+=r;
                    if(fin>1000000)
                        fin=1000000;
                }
            }
        }
        if(!chk)
            puts("NO CONFLICT");
        else
            puts("CONFLICT");
    }
}

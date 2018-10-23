#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{

    int n;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int i,j,k,sum=0;
        bool row=false,col=false;
        int r,c,cntr=0,cntc=0;
        vector<int>vec[n+1];
        rep0(i,n)
        {
            sum=0;
            rep0(j,n)
            {
                sf(k);
                vec[i].pb(k);
                sum+=k;
            }
            if(sum%2==1)
            {
                cntr++;
                r=i;
            }
        }
        rep0(i,n)
        {
            sum=0;
            rep0(j,n)
                sum+=vec[j][i];

            if(sum%2==1)
            {
                cntc++;
                c=i;
            }
        }
        if(cntc==0 && cntr==0)
            pf("OK\n");
        else if(cntc==1 && cntr==1)
            pf("Change bit (%d,%d)\n",++r,++c);
        else
            pf("Corrupt\n");
    }

    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

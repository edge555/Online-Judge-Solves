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
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,i;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        vector<double>vec;
        double sum=0,k,sum2=0,sum3=0,p;
        rep0(i,n)
        {
            cin>>k;
            vec.pb(k);
            sum+=k;
        }
        sum/=n;
        sum=round(sum*100.0)/100.0;
        rep0(i,n)
        {
            if(vec[i]>sum)
                sum2+=(vec[i]-sum);
            else
                sum3+=(sum-vec[i]);
        }
        pf("$%.2f\n",min(sum2,sum3));
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

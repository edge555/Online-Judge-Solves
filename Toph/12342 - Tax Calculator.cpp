#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%f %f",&num1,&num2)
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
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<float,float>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{

    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        ll b,n,tax=0,i;
        double f,a,p;
        cin>>a;
        a-=180000;
        if(a<=0)
            tax=0;
        else
        {
            if(a>0)
            {
                if(a>=300000)
                    p=300000;
                else
                    p=a;
                tax+=(ceil(p*0.1));
                a-=300000;
            }
            if(a>0)
            {
                if(a>=400000)
                    p=400000;
                else
                    p=a;
                tax+=(ceil(p*0.15));
                a-=400000;

            }
            if(a>0)
            {
                if(a>=300000)
                    p=300000;
                else
                    p=a;
                tax+=(ceil(p*0.2));
                a-=300000;

            }
            if(a>0)
                tax+=ceil(a*0.25);

            if(tax<2000)
                tax=2000;
        }
        pf("Case %d: %lld\n",t++,tax);
    }
}

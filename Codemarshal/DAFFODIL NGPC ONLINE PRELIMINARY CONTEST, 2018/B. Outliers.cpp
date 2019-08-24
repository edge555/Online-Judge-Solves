#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
float dis(float x,float avg)
{
    return abs(x-avg);
}
float low(float x,float l)
{
    return abs(x-l);
}
float high(float x,float h)
{
    return abs(x-h);
}
int main()
{
    int j,tc;
    cin>>tc;
    for(j=1;j<=tc;j++)
    {
        int n,l,h,i;
        cin>>n>>l>>h;
        vector<float>vec;
        float k,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>k;
            vec.pb(k);
            sum+=k;
        }
        float avg,da,dl,dh,db;
        avg=sum/n;
        pf("Case %d:\n",j);
        bool chk=false;
        for(i=0;i<vec.size();i++)
        {
            da=dis(vec[i],avg);
            dl=low(vec[i],l);
            dh=high(vec[i],h);
            db=min(dl,dh);
            if(db<da)
            {
                double p=vec[i];
                pf("%0.2f\n",p);
                chk=true;
            }
        }
        if(!chk)
            pf("No outliers\n");
    }
}

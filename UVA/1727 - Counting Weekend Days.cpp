#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    vector<string>day={"SAT","SUN","MON","TUE","WED","THU","FRI"},temp;
    rep(t,tc)
    {
        string month,fday;
        cin>>month>>fday;
        int i,j;
        temp.clear();
        rep0(i,7)
        {
            if(fday==day[i])
            {
                while(temp.size()!=7)
                {
                    temp.pb(day[i]);
                    i++;
                    i%=7;
                }
                break;
            }
        }
        int cnt=0;
        if(month=="FEB")
        {
            for(i=0,j=0;i<28;i++,j++)
            {
                j%=7;
                if(temp[j]=="FRI" || temp[j]=="SAT")
                    cnt++;
            }
        }
        else if(month=="JAN" || month=="MAR" || month=="MAY" || month=="JUL" || month=="AUG" || month=="OCT" || month=="DEC")
        {
            for(i=0,j=0;i<31;i++,j++)
            {
                j%=7;
                if(temp[j]=="FRI" || temp[j]=="SAT")
                    cnt++;
            }
        }
        else
        {
            for(i=0,j=0;i<30;i++,j++)
            {
                j%=7;
                if(temp[j]=="FRI" || temp[j]=="SAT")
                    cnt++;
            }
        }
        pf("%d\n",cnt);
    }
}

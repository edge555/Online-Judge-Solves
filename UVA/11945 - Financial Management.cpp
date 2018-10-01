
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

int main()
{
    int tc,j;
    sf(tc);
    rep(j,tc)
    {
        float sum=0,k;
        int i;
        rep0(i,12)
        {
            cin>>k;
            sum+=k;
        }
        sum/=12.0;
        pf("%d $",j);
        //pf("%.2f\n",sum);
        int p=sum;
        string a=to_string(p);
        rep0(i,a.size())
        {
            cout<<a[i];
            if(i==a.size()-4)
                pf(",");
        }
        sum-=p;
        a=to_string(sum);
        reps(i,1,3)
        {
            if(i==3)
            {
                int r=a[i]-'0';
                if(a[i+1]>='5')
                    r++;
                cout<<r;
            }
            else
                cout<<a[i];
        }
        puts("");
    }
}

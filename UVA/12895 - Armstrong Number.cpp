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
        int k,n,i,p=1;
        vector<int>vec;
        cin>>n;
        k=n;
        while(n!=0)
        {
            vec.pb(n%10);
            n/=10;
        }
        int sum,s,j;
        while(1)
        {
            sum=0;
            for(i=0;i<vec.size();i++)
            {
                s=1;
                rep0(j,p)
                    s*=vec[i];
                //db(s);
                sum+=s;
            }
            p++;
            if(sum==k)
            {
                puts("Armstrong");
                break;
            }
            else if(sum>k)
            {
                puts("Not Armstrong");
                break;
            }
            //db(sum);
        }
    }
}

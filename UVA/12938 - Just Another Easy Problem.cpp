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
    int i;
    vector<int>vec;
    for(i=32;i<=99;i++)
        vec.pb(i*i);
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        int n,k,p,cnt,j,ans=0;
        sf(n);
        string a=to_string(n);
        rep0(i,vec.size())
        {
            string b=to_string(vec[i]);
            cnt=0;
            rep0(j,b.size())
            {
                if(a[j]!=b[j])
                    cnt++;
            }
            if(cnt==1)
                ans++;
        }


        pf("Case %d: ",t);
        cout<<ans<<endl;
    }
}

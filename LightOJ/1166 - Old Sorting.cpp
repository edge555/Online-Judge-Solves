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
#define fi first
#define se second
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int k,tc;
    sf(tc);
    rep(k,tc)
    {
        int n,i,j,cnt=0;
        vector<int>vec;
        vector<int>::iterator it;
        sf(n);
        for (i=0;i<n;i++)
        {
            sf(j);
            vec.pb(j);
        }
        for (j=0;j<vec.size();j++)
        {
            if(vec[j]==j+1)
                continue;
            int x;
            for (x=0;x<vec.size();x++)
            {
                if(vec[x]==j+1)
                    break;
            }
            swap(vec[j],vec[x]);

            cnt++;

        }
        pf("Case %d: %d\n",k,cnt);
    }
}

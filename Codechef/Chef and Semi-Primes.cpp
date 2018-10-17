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
bool prime(int n)
{
    int i;
    reps(i,2,sqrt(n))
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int i,k,j;
    vector<int>vec;
    reps(i,1,200)
    {
        reps(j,2,sqrt(i))
        {
            if(i%j==0)
            {
                if(j!=i/j)
                {
                    if(prime(j) && prime(i/j))
                    {
                        vec.pb(i);
                        break;
                    }
                }
            }
        }
    }
    int tc;
    cin>>tc;
    rep(j,tc)
    {
        int n;
        cin>>n;
        bool chk=false;
        rep0(i,vec.size())
        {
            int p=n-vec[i];
            if(binary_search(all(vec),p))
            {
                chk=true;
                break;
            }
        }
        if(chk)
            puts("YES");
        else
            puts("NO");
    }
}

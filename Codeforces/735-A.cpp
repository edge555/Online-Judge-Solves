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
    int n,k;
    sff(n,k);
    string a;
    cin>>a;
    int x,y,i;
    vector<int>vec;
    rep0(i,a.size())
    {
        if(a[i]=='G')
            x=i;
        else if(a[i]=='T')
            y=i;
        else if(a[i]=='#')
            vec.pb(i);
    }
    if(x<y)
    {
        int dif=y-x;
        if(dif%k!=0)
        {
            puts("NO");
            return 0;
        }
        else
        {
            while(x!=y)
            {
                x+=k;
                if(binary_search(all(vec),x))
                {
                    puts("NO");
                    return 0;
                }
            }
        }
    }
    else
    {
        int dif=x-y;
        if(dif%k!=0)
        {
            puts("NO");
            return 0;
        }
        else
        {
            while(x!=y)
            {
                x-=k;
                if(binary_search(all(vec),x))
                {
                    puts("NO");
                    return 0;
                }
            }
        }
    }
    puts("YES");
}

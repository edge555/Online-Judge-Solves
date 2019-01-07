#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool func(int a,int b)
{
    return a>b;
}
int main()
{
    int sum=0,n,k,x,i,p;
    vector<int>vec;
    sff(n,k);
    sf(x);
    for (i=0;i<n;i++)
    {
       sf(p);
       vec.pb(p);
       sum+=p;
    }
    sort(vec.begin(),vec.end(),func);
    int sum2=0;
    for (i=0;i<vec.size();i++)
    {
        if(k!=0)
        {
            if(vec[i]>x)
            {
                sum2+=x;
                k--;
                continue;
            }
            else
                sum2+=vec[i];
        }
        else
            sum2+=vec[i];
    }
    cout<<min(sum,sum2);
}

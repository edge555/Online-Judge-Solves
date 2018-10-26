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
    int n,i;
    sf(n);
    string a;
    cin>>a;
    bool chk=true;
    int sum=0;
    rep0(i,n)
    {
        if(i<n/2)
            sum+=(a[i]-'0');
        else
            sum-=(a[i]-'0');
        if(a[i]=='4' || a[i]=='7')
            continue;
        pf("NO");
        return 0;
    }
    if(sum==0)
        pf("YES");
    else
        pf("NO");
}

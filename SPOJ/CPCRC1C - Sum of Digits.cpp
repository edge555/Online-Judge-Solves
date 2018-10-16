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

long long sum(long long N)
{
    if(N/10==0)
        return N*(N+1)/2;
    int i=0;
    long long n=N;
    while(n/10!=0)
    {
        i++;
        n/=10;
    }
    int p=pow(10,i);
    return ((n*45*i*p/10)+n*(n-1)*p/2+n*(N%p+1)+sum(N%p));
}
int main()
{
    long long a,b;

    while(1)
    {
        cin>>a>>b;
        if(a+b==-2)
            return 0;
        cout<<sum(b)-sum(a-1)<<endl;
    }
}

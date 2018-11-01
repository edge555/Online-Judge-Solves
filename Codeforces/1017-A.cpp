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

int main()
{
    int n,a,b,c,d,k,sum=0,sum2=0,r=1;
    sf(n);
    for (int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        if(i==0)
            sum=a+b+c+d;
        else
            sum2=a+b+c+d;
        if(sum2>sum)
            r++;
    }
    cout<<r<<endl;
}

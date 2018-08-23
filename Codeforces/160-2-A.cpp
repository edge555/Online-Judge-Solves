#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int sum=0,ara[n+1];
    for (i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n);
    reverse(ara,ara+n);
    int sum2=0,cnt=0;
    for (i=0;i<n;i++)
    {
        if(sum>=sum2)
        {
            cnt++;
            sum-=ara[i];
            sum2+=ara[i];
        }
    }
    cout<<cnt<<endl;
}

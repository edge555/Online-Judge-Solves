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
    ll two,thr,fiv,six,cnt=0,sum=0;
    cin>>two>>thr>>fiv>>six;
    while(1)
    {
        if(two==0 || fiv==0 || six==0)
            break;
        cnt++;
        two--;fiv--;six--;
    }
    sum+=(cnt*256);
    cnt=0;
    while(1)
    {
        if(two==0 || thr==0)
            break;
        cnt++;
        two--;thr--;
    }
    sum+=(cnt*32);
    cout<<sum;
}

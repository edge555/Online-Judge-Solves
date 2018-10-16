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
    string a,b;
    while(1)
    {
        cin>>a;
        if(a[0]=='0')
            return 0;
        ll sum=0,i,cnt=0;
        b=a;
        bool chk=true;
        while(1)
        {
            rep0(i,a.size())
                sum+=a[i]-'0';
            if(sum%9!=0)
            {
                chk=false;
                break;
            }
            cnt++;
            if(sum==9)
                break;
            else
                a=to_string(sum);
            sum=0;

        }
        if(!chk)
            cout<<b<<" is not a multiple of 9.\n";
        else
            cout<<b<<" is a multiple of 9 and has 9-degree "<<cnt<<".\n";
    }
}

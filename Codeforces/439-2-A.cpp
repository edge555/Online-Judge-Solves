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
    int n,d,i,k;
    sff(n,d);
    vector<int>vec;
    rep0(i,n)
    {
        cin>>k;
        vec.pb(k);
    }
    i=0;
    int cnt=0;
    bool chk=false;
    while(1)
    {
        //db(d);
        if(d-vec[i]<0 || d<=0)
        {
            i--;
            break;
        }
        chk=true;
        d-=vec[i];
        if(d>=10)
        {
            cnt+=2;
            d-=10;
        }
        else
            break;
        if(i==n-1)
            break;
        i++;
    }
    //db(i);
    if((i!=n-1)||(!chk))
    {
        pf("-1");
        return 0;
    }
    //db(cnt);
    //db(d);
    int r=d%10;
    if(r>=5)
        cnt++;
    d/=10;
    cnt+=(d*2);
    cout<<cnt;
}

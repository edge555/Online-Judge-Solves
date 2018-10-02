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
    int n,i,k,d;
    sff(n,d);
    vector<pi>vec;
    rep0(i,n)
    {
        sf(k);
        vec.pb(make_pair(k,i));
    }
    sort(all(vec));
    i=0;
    int cnt=0;
    while(1)
    {

        d-=vec[i].fi;
        //db(d);
        if(d<0)
            break;
        cnt++;
        if(i==n-1)
            break;
        i++;
    }
    cout<<cnt<<endl;
    rep0(i,cnt)
        cout<<vec[i].se+1<<" ";
}

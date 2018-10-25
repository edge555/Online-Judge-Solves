#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int b,n,m,i,k,j;
    sfff(b,n,m);
    vector<int>vec,vec2;
    int ans=INT_MIN;
    rep0(i,n)
    {
        sf(k);
        vec.pb(k);
    }
    rep0(i,m)
    {
        sf(k);
        vec2.pb(k);
    }
    sort(all(vec2));
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(vec2[j]+vec[i]<=b)
                ans=max(ans,vec2[j]+vec[i]);
            else
                break;
        }

    }
    if(ans==INT_MIN)
        pf("-1");
    else
        cout<<ans;
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

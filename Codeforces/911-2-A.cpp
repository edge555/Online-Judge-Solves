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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,k,mn,i,li;
    cin>>n;
    vector<int>vec,vec2;
    cin>>mn;
    vec.pb(mn);
    for (i=1;i<n;i++)
    {
        cin>>k;
        vec.pb(k);
        if(k<=mn)
        {
            li=i;
            mn=k;
        }

    }
    int mn2=100005;
    bool chk=false;
    for (i=0;i<=li;i++)
    {
        if(vec[i]==mn)
            vec2.pb(i);
    }
    for (i=1;i<vec2.size();i++)
        mn2=min(mn2,(vec2[i]-vec2[i-1]));

    cout<<mn2;
}

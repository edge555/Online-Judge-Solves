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
    int n,m,i,k,mx,ans=-1,ind;
    sff(n,m);
    map<int,int>mp;
    while(m--)
    {
        vector<int>vec;
        mx=INT_MIN;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
            if(k>mx)
            {
                ind=i+1;
                mx=k;
            }

        }

        mp[ind]++;
        ans=max(ans,mp[ind]);

    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->se==ans)
        {
            cout<<it->fi;
            return 0;
        }
    }
}

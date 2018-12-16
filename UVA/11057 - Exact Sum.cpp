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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,tc=1;
    while(~sf(n))
    {
        int i,j,k;
        unordered_map<int,int>mp;
        vector<int>vec;
        rep0(i,n)
        {
            sf(k);
            mp[k]++;
            vec.pb(k);
        }
        sf(k);
        sort(all(vec));
        int ans=INT_MAX,x,y;
        rep0(i,vec.size())
        {
            j=k-vec[i];
            int val=abs(vec[i]-j);
            if(val<ans)
            {
                if(binary_search(all(vec),j))
                {
                    if(vec[i]==j)
                    {
                        if(mp[j]<2)
                            continue;
                        ans=val;
                        x=vec[i];
                        y=j;
                    }
                    else
                    {
                        ans=val;
                        x=vec[i];
                        y=j;
                    }
                }
            }
        }
        pf("Peter should buy books whose prices are %d and %d.\n\n",x,y);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

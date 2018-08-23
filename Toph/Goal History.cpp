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
    int tc;
    sf(tc);
    while(tc--)
    {
        int n,q,i,g;
        ll y;
        sff(n,q);
        vector<pair<ll,int>>vec;
        vector<ll>vec2;
        vector<ll>::iterator it;
        while(n--)
        {
            scanf ("%lld %d",&y,&g);
            vec.pb(make_pair(y,g));
            vec2.pb(y);
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end());
        while(q--)
        {
            cin>>y;
            it=lower_bound(vec2.begin(),vec2.end(),y);
            int p=distance(vec2.begin(),it);
            int n1,n2,n3;
            if(p==0)
                n1=-1;
            else
                n1=vec[p-1].second;
            n2=vec[p].second;
            if(p==vec.size()-1)
                n3=-1;
            else
                n3=vec[p+1].second;
            pf("%d %d %d\n",n1,n2,n3);
        }
        puts("");
    }
}

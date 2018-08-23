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
    int j,tc;
    sf(tc);
    for (j=1;j<=tc;j++)
    {
        string a;
        int k,mx,i;
        vector<string>vec;
        vector<string>::iterator it;
        cin>>a>>k;
        vec.pb(a);
        mx=k;
        for (i=1;i<10;i++)
        {
            cin>>a>>k;
            if(mx==k)
                vec.pb(a);
            else if(mx<k)
            {
                vec.clear();
                vec.pb(a);
            }
            //dbb(mx,vec.size());
            mx=max(k,mx);
        }
        pf("Case #%d:\n",j);
        for (it=vec.begin();it!=vec.end();it++)
            cout<<*it<<endl;
    }
}

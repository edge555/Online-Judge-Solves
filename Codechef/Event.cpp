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
    vector<string>vec={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        vector<string>day;
        int i,j;
        string a,b;
        cin>>a>>b;
        int l,r;
        sff(l,r);
        rep0(i,vec.size())
        {
            if(vec[i]==a)
                break;
        }
        while(day.size()<7)
        {
            day.pb(vec[i]);
            if(i==6)
                i=0;
            else
                i++;
        }
        rep0(i,day.size())
        {
            if(day[i]==b)
                break;
        }
        i++;
        int cnt=0,ans;
        while(i<=r)
        {
            if(i>=l && i<=r)
            {
                ans=i;
                cnt++;
            }
            i+=7;
        }
        if(cnt==0)
            pf("impossible");
        else if(cnt>1)
            pf("many");
        else
            pf("%d",ans);
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

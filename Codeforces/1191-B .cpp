#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,char>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    set<string>st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    if(st.size()<=2)
    {
        cout<<abs(int(st.size())-1);
        return 0;
    }
    vector<pi>vec;
    vec.pb({a[0]-'0',a[1]});
    vec.pb({b[0]-'0',b[1]});
    vec.pb({c[0]-'0',c[1]});
    sort(all(vec));
    int ans=2;
    if(vec[0].se==vec[1].se && vec[1].se==vec[2].se)
    {
        int cnt=0;
        if(vec[0].fi+1==vec[1].fi)
            cnt++;
        if(vec[1].fi+1==vec[2].fi)
            cnt++;
        if(cnt==2)
        {
            cout<<0;
            return 0;
        }
        cnt=0;
        if(vec[1].fi-vec[0].fi<=2)
            cnt++;
        if(vec[2].fi-vec[1].fi<=2)
            cnt++;
        if(vec[2].fi-vec[0].fi<=2)
            cnt++;
        if(cnt)
            ans=min(ans,1);
    }
    else
    {
        int cnt=0;
        if(vec[0].se==vec[1].se)
            ans=min(ans,abs(vec[0].fi-vec[1].fi)<=2?1:2);
        else if(vec[1].se==vec[2].se)
            ans=min(ans,abs(vec[2].fi-vec[1].fi)<=2?1:2);
        else if(vec[0].se==vec[2].se)
            ans=min(ans,abs(vec[2].fi-vec[0].fi)<=2?1:2);
    }
    cout<<ans;
}

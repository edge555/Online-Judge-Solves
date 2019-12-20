#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int i,j,n;
        cin>>n;
        string a,b;
        unordered_map<string,string>mp;
        cin.ignore();
        cout<<"Case "<<t<<":"<<endl;
        rep0(i,n)
        {
            vector<string>vec;
            getline(cin,a);
            stringstream ss(a);
            while(ss>>b)
                vec.pb(b);
            int len=sz(vec);
            vec[len-1].pop_back();
            if(vec[0]=="auto")
            {
                if(mp[vec[3]]=="double" || mp[vec[5]]=="double")
                    cout<<"double "<<vec[1]<<endl;
                else if(mp[vec[3]]=="float" || mp[vec[5]]=="float")
                    cout<<"float "<<vec[1]<<endl;
                else
                    cout<<"int "<<vec[1]<<endl;
            }
            else
                mp[vec[1]]=vec[0];
        }
        cout<<endl;
    }
}

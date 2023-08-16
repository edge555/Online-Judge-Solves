#include <bits/stdc++.h>
using namespace std;

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

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()

#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))

#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >

#define endl "\n";
#define line puts("-------");
#define dbb(x) cout<<#x<<" : "<<x<<"\n";

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif

const int N = 100005;
const int MOD = 1000000007;
using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    FAST;
    int i,n;
    cin>>n;
    while(n--){
        vector<string>vec;
        string s;
        rep0(i,8){
            cin>>s;
            vec.push_back(s);
        }
        s="";
        int j,k;
        bool f=false;
        rep0(i,8){
            rep0(j,8){
                if(vec[i][j]!='.'){
                    s+=vec[i][j];
                    j=8;
                }
            }
        }
        cout<<s<<endl;
    }
}

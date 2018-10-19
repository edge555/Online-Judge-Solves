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
    vector<char>vec[12];
    vec[1]={'.',',','?','"'};
    vec[2]={'a','b','c'};
    vec[3]={'d','e','f'};
    vec[4]={'g','h','i'};
    vec[5]={'j','k','l'};
    vec[6]={'m','n','o'};
    vec[7]={'p','q','r','s'};
    vec[8]={'t','u','v'};
    vec[9]={'w','x','y','z'};
    vec[0]={' '};
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        string a="";
        vector<int>vec2;
        int i,k,n;
        sf(n);
        rep0(i,n)
        {
            sf(k);
            vec2.pb(k);
        }
        rep0(i,n)
        {
            sf(k);
            a+=vec[vec2[i]][k-1];
        }
        cout<<a<<endl;
    }
}

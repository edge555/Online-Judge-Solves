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
string rev(string s)
{
    reverse(all(s));
    return s;
}
bool palindrome(string s)
{
    string t=s;
    reverse(all(t));
    return t==s;
}
int main()
{
    FAST;
    int i,j,n,m;
    cin>>n>>m;
    vector<string>vec,vec2;
    unordered_map<string,bool>mp;
    string pali="",a;
    rep0(i,n)
    {
        cin>>a;
        if(palindrome(a))
        {
            if(pali.size()<a.size())
                pali=a;
            continue;
        }
        vec.pb(a);
    }
    int len=0;
    stack<string>l;
    queue<string>r;
    if(vec.size()>=2)
    {
        rep0(i,vec.size()-1)
        {
            a=vec[i];
            if(mp[a])
                continue;
            string b=rev(a);
            reps(j,i+1,vec.size()-1)
            {
                if(vec[j]==b)
                {
                    len+=2*m;
                    mp[b]=true;
                    l.push(a);
                    r.push(b);
                    break;
                }
            }
        }
    }
    cout<<len+pali.size()<<endl;
    while(!l.empty())
    {
        cout<<l.top();
        l.pop();
    }
    cout<<pali;
    while(!r.empty())
    {
        cout<<r.front();
        r.pop();
    }
}

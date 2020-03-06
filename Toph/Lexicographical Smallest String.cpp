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
    int n,k,i;
    string a;
    cin>>n>>k>>a;
    unordered_map<char,int>mp;
    rep0(i,n)
        mp[a[i]]++;
    char ch='A';
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->se==k)
            ch=max(ch,it->fi);
    }
    if(ch=='A')
    {
        cout<<a;
        return 0;
    }
    if(ch=='a')
    {
        bool f=false;
        rep0(i,n)
        {
            if(a[i]=='a')
            {
                if(f)
                    continue;
                else
                {
                    cout<<a[i];
                    f=true;
                }
            }
            else
                cout<<a[i];
        }
    }
    else
    {
        bool chk=false;
        rep0(i,n-1)
        {
            if(a[i]==ch)
            {
                if(a[i+1]>ch)
                {
                    a[i]='.';
                    chk=true;
                    break;
                }
            }
        }
        if(chk)
        {
            rep0(i,n)
            {
                if(a[i]=='.')
                    cout<<ch;
                else if(a[i]!=ch)
                    cout<<a[i];
            }
        }
        else
        {
            bool f=false;
            for(i=n-1;i>=0;i--)
            {
                if(a[i]==ch)
                {
                    if(!f)
                        f=true;
                    else
                        a[i]='.';
                }
            }
            rep0(i,n)
            {
                if(a[i]!='.')
                    cout<<a[i];
            }
        }
    }
}

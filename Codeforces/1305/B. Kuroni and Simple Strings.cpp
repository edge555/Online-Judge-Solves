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
vector<queue<int> >vec;
bool possible(int p,string a)
{
    int i=0,x=p,y=p,n=a.size();
    while(i<n && x)
    {
        if(a[i]=='(')
            x--;
        i++;
    }
    while(i<n && y)
    {
        if(a[i]==')')
            y--;
        i++;
    }
    return !x && !y;
}
int len(string s)
{
    int lo=0,hi=s.size()/2+1;
    int ans=0;
    while(lo<=hi)
    {
        int mid=(lo+hi)>>1;
        if(possible(mid,s))
        {
            ans=max(ans,mid);
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    return ans;
}
int main()
{
    FAST;
    string a,c;
    cin>>a;
    c=a;
    while(1)
    {
        int l=len(a);
        if(l==0)
            break;
        queue<int>q;
        int x=l,y=l,i=0;
        while(x)
        {
            if(a[i]=='(')
            {
                a[i]='.';
                x--;
                q.push(i+1);
            }
            i++;
        }
        i=a.size()-1;
        while(y)
        {
            if(a[i]==')')
            {
                a[i]='.';
                y--;
                q.push(i+1);
            }
            i--;
        }
        vec.pb(q);
    }
    cout<<vec.size()<<endl;
    int i;
    rep0(i,vec.size())
    {
        cout<<vec[i].size()<<endl;
        queue<int>s=vec[i];
        int r=vec[i].size()/2;
        stack<int>ss;
        while(r)
        {
            cout<<s.front()<<" ";
            s.pop();
            r--;
        }
        while(!s.empty())
        {
            ss.push(s.front());
            s.pop();
        }
        while(!ss.empty())
        {
            cout<<ss.top()<<" ";
            ss.pop();
        }
        cout<<endl;
    }
}

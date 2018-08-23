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
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pi;
pi x;
ll diff;
int main()
{
    int j,tc;
    sf(tc);
    for(j=1;j<=tc;j++)
    {
        ll n,a,b,k=0,i;
        cin>>n;
        stack<pi>s;
        rep0(i,n)
        {
            cin>>a>>b;
            bool chk=false;
            if(s.empty())
            {
                s.push(make_pair(a,b));
                chk=true;
            }
            else if(s.size()==1)
            {
                x=s.top();
                if(a==x.first && b!=x.second)
                {
                    s.push(make_pair(a,b));
                    diff=b-x.second;
                    chk=true;
                }
            }
            else
            {
                x=s.top();
                if(b-x.second==diff && a==x.first)
                {
                    s.push(make_pair(a,b));
                    chk=true;
                }
            }
            if(!chk)
            {
                if(s.size()>=3)
                    k++;
                while(!s.empty())
                    s.pop();
                s.push(make_pair(a,b));
            }
        }
        if(s.size()>=3)
            k++;
        pf("Case %d: %lld\n",j,k);
    }
}

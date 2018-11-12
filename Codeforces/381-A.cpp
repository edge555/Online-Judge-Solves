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
    int n,i,k,s=0,d=0;
    sf(n);
    deque<int>dq;
    while(n--)
    {
        sf(k);
        dq.pb(k);
    }
    i=0;
    while(!dq.empty())
    {
        int x,y,ans;
        x=dq.front();
        y=dq.back();
        if(x>y)
        {
            ans=x;
            dq.pop_front();
        }
        else if(y>x)
        {
            ans=y;
            dq.pop_back();
        }
        else
        {
            dq.pop_back();
            dq.pop_front();
            int p=dq.front(),q=dq.front();
            if(p>q)
            {
                dq.push_front(x);
                ans=y;
            }
            else
            {
                dq.push_back(y);
                ans=x;
            }
        }
        if(i%2==0)
            s+=ans;
        else
            d+=ans;
        i++;
    }
    cout<<s<<" "<<d;
}

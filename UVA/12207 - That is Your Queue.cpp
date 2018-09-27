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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,m,j=1;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            break;
        int x=min(n,m),i;
        list<ll>ls;
        rep(i,x)
            ls.pb(i);
        char ch;
        int k,p;
        pf("Case %d:\n",j++);
        while(m--)
        {
            cin>>ch;
            if(ch=='N')
            {
                p=ls.front();
                cout<<p<<endl;
                ls.pop_front();
                ls.pb(p);
            }
            else
            {
                cin>>k;
                ls.remove(k);
                ls.push_front(k);
            }
        }
    }
}

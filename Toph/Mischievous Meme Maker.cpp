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
typedef unsigned long long ll;
using namespace std;

int main()
{
    unsigned long long i,k=1;
    vector<ll>vec;
    vec.pb(1);
    for (i=0;i<50;i++)
    {
        k*=2;
        vec.pb(k);
    }
    int n,tc,j;
    sf(tc);
    while(tc--)
    {
        sf(n);
        for (i=0;i<n;i++)
        {
            cout<<vec[i];
            if(i!=n-1)
                pf(" ");
        }
        cout<<endl;
    }
}

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
    int tc;
    sf(tc);
    getchar();
    string a;
    while(tc--)
    {
        cin>>a;
        int b=0,o,i,k;
        for (i=0;i<a.size();i++)
        {
            if((a[i]=='O') || (a[i]>='1' && a[i]<='6'))
                b++;
        }
        k=b;
        o=b/6;
        b%=6;
        pf("%d BALLS\n",k);
        if(o!=0)
        {
            pf("%d OVER",o);
            if(b!=0)
                pf(" %d BALLS",b);
            cout<<endl;
        }
    }
}

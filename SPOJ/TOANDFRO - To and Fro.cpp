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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        string a;
        cin>>a;
        int i,m=a.size()/n,cnt=0;
        char ara[m+1][n+1],ch;
        bool chk=false;
        int p,k=0;
        for (i=0;i<a.size();i+=n,k++)
        {
            string b;
            for (int j=i;j<=i+n-1;j++)
                 b.pb(a[j]);
            if(k%2==1)
                 reverse(b.begin(),b.end());
            for (int y=0;y<b.size();y++)
                ara[k][y]=b[y];
        }
        for (i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
                cout<<ara[j][i];
        }
        cout<<endl;
    }
}

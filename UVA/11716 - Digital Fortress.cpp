#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc,t;
    sf(tc);
    getchar();
    rep(t,tc)
    {
        string a;
        getline(cin,a);
        int k=sqrt(a.size()),i;
        if(k*k!=a.size())
        {
            pf("INVALID\n");
            continue;
        }
        string b[k],c="";
        int ind=0,j=0;
        rep0(i,a.size())
        {
            if(j<k)
            {
                c+=a[i];
                j++;
            }
            else
            {
                b[ind]=c;
                ind++;
                c.clear();
                j=1;
                c+=a[i];
            }
            if(i==a.size()-1)
                b[ind]=c;
        }
        j=0;
        rep0(j,k)
        {
            rep0(i,k)
                cout<<b[i][j];
        }
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}

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
typedef long long int ll;
using namespace std;

int main()
{
    int tc,j;
    sf(tc);
    rep(j,tc)
    {
        int n,i;
        vector<string>vec;
        string a;
        sf(n);
        for (i=0;i<n;i++)
        {
            cin>>a;
            vec.pb(a);
        }
        cin>>a;
        pf("Case %d:\n",j);
        for(int k=0;k<vec.size();k++)
        {
            string b=vec[k];
            bool chk=false,chk2=true;
            if(b.size()!=a.size())
                continue;
            for (int p=0;p<a.size();p++)
            {
                if(a[p]!=b[p])
                {
                    if(!chk)
                        chk=true;
                    else
                        chk2=false;
                }
            }
            if(chk2)
                cout<<b<<endl;
        }
    }
}

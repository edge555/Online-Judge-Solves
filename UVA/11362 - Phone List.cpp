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
bool chk(string a,string b)
{
    int i,j;
    int x=a.size(),y=b.size();
    //dbb(a,b);
    if(x>y)
        return false;
    rep0(i,a.size())
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;

}
int main()
{
    int tc,j;
    sf(tc);
    rep(j,tc)
    {
        vector<string>vec;
        int n,i;
        sf(n);
        string a;
        while(n--)
        {
            cin>>a;
            vec.pb(a);
        }
        sort(all(vec));
        int cnt=0;
        for(i=0;i<vec.size()-1;i++)
        {
            string b=vec[i],c=vec[i+1];
            if(!chk(b,c))
                cnt++;
        }
        if(cnt==vec.size()-1)
            puts("YES");
        else
            puts("NO");
    }
}

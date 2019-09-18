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
string a,b,c,d;
int main()
{
    int n,i,p;
    sf(n);
    cin>>a>>b;
    c=a;
    d=b;
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    for (i=0;i<c.size();i++)
    {
        if(c[i]!=d[i])
        {
            puts("-1");
            return 0;
        }
    }
    int cnt=0;
    for (i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
            cnt++;
    }
    if(cnt==a.size())
    {
        puts("0");
        return 0;
    }
    vector<int>vec;
    for (i=0;i<a.size()-1;i++)
    {
        if(a[i]==b[i])
            continue;
        for (p=i;;p++)
        {
            if(a[p]==b[i])
                break;
        }
        while(1)
        {
            swap(a[p],a[p-1]);
            vec.pb(p);
            if(a[i]==b[i])
                break;
            else
                p--;
        }
    }
    cout<<vec.size()<<endl;
    for (i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
}

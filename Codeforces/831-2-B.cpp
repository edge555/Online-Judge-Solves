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
    string a,b,c;
    map<char,char>mp;
    cin>>a>>b>>c;
    int i;
    rep0(i,a.size())
        mp.insert(make_pair(a[i],b[i]));

    rep0(i,c.size())
    {
        if(c[i]>='0' && c[i]<='9')
            cout<<c[i];
        else if(c[i]>='a' && c[i]<='z')
            cout<<mp[c[i]];
        else
        {
            char ch=tolower(c[i]);
            ch=mp[ch];
            ch-=32;
            cout<<ch;
        }
    }
}

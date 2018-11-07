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
    int i;
    map<char,int>mp;
    for (char ch='0',i=0;ch<='9';ch++,i++)
        mp[ch]=i;
    int n,m;
    sff(n,m);
    string a[n+1];
    for (i=0;i<n;i++)
        cin>>a[i];
    set<int>st;
    for (i=0;i<m;i++)
    {
        int mx=-1;
        for(int j=0;j<n;j++)
            mx=max(mx,mp[a[j][i]]);
        for(int j=0;j<n;j++)
        {
            if(mp[a[j][i]]==mx)
                st.insert(j);
        }
    }
    cout<<st.size();
}

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
    int n,k,i;
    sff(n,k);
    string a;
    cin>>a;
    char ch='A'+(k-1);
    bool exist=false;
    map<char,int>mp;
    set<char>st;
    rep0(i,n)
    {
        if(a[i]==ch)
            exist=true;
        if(a[i]<=ch)
        {
            mp[a[i]]++;
            st.insert(a[i]);
        }
    }
    if(!exist || st.size()!=k)
    {
        cout<<0;
        return 0;
    }
    int p=INT_MAX;
    for(auto it=mp.begin();it!=mp.end();it++)
        p=min(p,it->second);
    cout<<k*p;
}

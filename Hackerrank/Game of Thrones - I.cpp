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

    string a;
    cin>>a;
    map<char,int>mp;
    map<char,int>::iterator it;
    int i,o=0;
    rep0(i,a.size())
        mp[a[i]]++;
    for (it=mp.begin();it!=mp.end();it++)
    {
        if(it->second%2==1)
            o++;
    }
    (o>1)?puts("NO"):puts("YES");
}

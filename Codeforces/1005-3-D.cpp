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
int p=0;
bool calc(string a)
{
    int i,sum=0;
    rep0(i,a.size())
        sum+=(a[i]-'0');
    if(sum%3==0)
        return true;
    return false;
}
bool calch(char a)
{
    int k=a-'0';
    if(k%3==0)
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    int i,n,cnt=0,j;
    calc(a);
    rep0(i,a.size())
    {
        string b;
        b.pb(a[i]);
        if(calc(b))
        {
            cnt++;
            continue;
        }
        if(i==a.size()-1)
            continue;
        b.pb(a[i+1]);
        if(calc(b) || calch(a[i+1]))
        {
            cnt++;
            i++;
            continue;
        }
        if(i==a.size()-2)
            continue;
        cnt++;
        i+=2;
    }
    cout<<cnt;
}

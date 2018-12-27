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
    int n;
    sf(n);
    vector<string>vec={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    vector<string>vec2={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(n<20)
        cout<<vec[n];
    else
    {
        int x=n%10;
        n/=10;
        cout<<vec2[n-2];
        if(x!=0)
            cout<<"-"<<vec[x];
    }
}

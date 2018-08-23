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
    getline(cin,a);
    int h=1,i;
    if(a[0]=='0')
        h=a[1]-'0';
    else
    {
        h=a[0]-'0';
        h*=10;
        h+=a[1]-'0';
    }
    if(a[8]=='P')
    {
        if(h!=12)
            h+=12;
    }
    if(a[8]=='A' && h==12)
        h-=12;
    pf("%02d:",h);
    for (i=3;i<8;i++)
        cout<<a[i];
}

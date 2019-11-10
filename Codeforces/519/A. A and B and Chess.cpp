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
    map<char,int>mp;
    mp['q']=9;
    mp['r']=5;
    mp['b']=3;
    mp['n']=3;
    mp['p']=1;
    mp['Q']=9;
    mp['R']=5;
    mp['B']=3;
    mp['N']=3;
    mp['P']=1;
    string a[10];
    int i,j,sum=0,sum2=0;
    for (i=0;i<8;i++)
        getline(cin,a[i]);

    for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
        {
            char ch=a[i][j];
            if(isalpha(ch))
            {
                if(ch>='A' && ch<='Z')
                    sum+=mp[ch];
                else
                    sum2+=mp[ch];
            }
        }
    }
    if(sum==sum2)
        puts("Draw");
    else
        (sum>sum2)?puts("White"):puts("Black");
}

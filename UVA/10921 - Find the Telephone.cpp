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
    map<char,char>mp;

    mp['A']='2';mp['B']='2';mp['C']='2';mp['D']='3';
    mp['E']='3';mp['F']='3';mp['G']='4';mp['H']='4';
    mp['I']='4';mp['J']='5';mp['K']='5';mp['L']='5';
    mp['M']='6';mp['N']='6';mp['O']='6';mp['P']='7';
    mp['Q']='7';mp['R']='7';mp['S']='7';mp['T']='8';
    mp['U']='8';mp['V']='8';mp['W']='9';mp['X']='9';
    mp['Y']='9';mp['Z']='9';mp['-']='-';


    string a;
    while(cin>>a)
    {
        int i;
        rep0(i,a.size())
        {
            if(a[i]>='0' && a[i]<='9')
                continue;
            a[i]=mp[a[i]];
        }
        cout<<a<<endl;
    }
}

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
    int n,i,j;
    cin>>n;
    string a[n+1];
    rep0(i,n)
        cin>>a[i];
    set<char>st;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!='.')
                    st.insert(a[i][j]);
                a[i][j]='.';
            }
            if(i+j+1==n)
            {
                if(a[i][j]!='.')
                    st.insert(a[i][j]);
                a[i][j]='.';
            }
        }
    }
    if(st.size()!=1)
    {
        puts("NO");
        return 0;
    }
    char ch=*st.begin();
    st.clear();
    int cnt=0;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!='.' && a[i][j]!=ch)
            {
                cnt++;
                st.insert(a[i][j]);
            }
        }
    }
    (cnt==(n*n)-(2*n-1) && st.size()==1)?puts("YES"):puts("NO");
}

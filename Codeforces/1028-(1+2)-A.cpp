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
    int n,m,x,y,k=0,i,j;
    sff(n,m);
    getchar();
    string a[n+1];
    rep0(i,n)
        cin>>a[i];
    bool chk=false;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (chk==true)
                break;
            else if(a[i][j]=='B')
            {
                chk=true;
                x=i;
                y=j;
                while(a[i][j]=='B'){
                    k++;
                    j++;
                }
                break;
            }
        }
    }
    k/=2;
    cout<<++x+k<<" "<<++y+k<<endl;
}

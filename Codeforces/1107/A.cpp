#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    getchar();
    while(tc--)
    {
        int i,n;
        string a;
        sf(n);
        cin>>a;
        if(n==1)
            puts("NO");
        else if(n==2)
        {
            int x=a[0]-'0';
            int y=a[1]-'0';
            if(x>=y)
                puts("NO");
            else
            {
                pf("YES\n2\n");
                cout<<x<<" "<<y<<endl;
            }
        }
        else
        {
            pf("YES\n2\n");
            for(i=0;i<n;i++)
            {
                cout<<a[i];
                if(i==0)
                    pf(" ");
            }
            puts("");
        }
    }
}
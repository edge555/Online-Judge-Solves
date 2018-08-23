#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
    ll m,k,p,a,aa,aaa,b,ps,psl;
    while(1)
    {
        cin>>m>>k>>p;
        if(m==0 && k==0 && p==0)
            break;
        a=(m/5)*2;
        aa=(m/3);
        ll x=(m/5);
        ll y=m%5;
        ll z=y/3;
        aaa=(x*2)+z;

        a=max(a,aa);
        a=max(a,aaa);
        psl=(a/p)*k;
        ps=a%p;
        printf("Emrul solves %lld Problems, saves %lld Pan Moshlas\n",psl,ps);
    }
}

#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

using namespace std;
int main()
{
   int n,i;
   sf(n);
   int ara[n+1];
   for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
            ara[i]=ara[i]-1;
   }
   for(i=0;i<n;i++)
        cout<<ara[i]<<" ";
}

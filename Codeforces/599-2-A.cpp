#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int a,k=3,sum=0;
    multiset<int>st;
    multiset<int>::iterator it;
    while(k--)
    {
        sf(a);
        st.insert(a);
        sum+=a;
    }
    it=st.begin();
    int p=*it;
    it++;
    //debug2(p,*it);
    if(sum<2*(p+*it))
        pf("%d\n",sum);
    else
        pf("%d\n",2*(p+*it));
}

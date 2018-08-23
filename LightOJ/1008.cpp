#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
   int n,p;
   sf(n);
   string a;
   deque<int>dq;
   int mx=-1,mn=1000001;
   while(n--)
   {
     cin>>a;
     if(a=="Insert Back")
     {
         cin>>p;
         dq.push_back(p);
         mx=max(mx,p);
     }
     else if(a=="Insert Front")
     {
         cin>>p;
         dq.push_front(p);
         mn=min(mn,p);
     }
     else if(a=="Get Max")
        cout<<mx<<endl;
     else if(a=="Get Min")
        cout<<mn<<endl;
     else if(a=="Erase Back")
        dq.pop_back();
     else if(a=="Erase Front")
        dq.pop_front();
     else if(a=="Get Back")
        cout<<dq.back()<<endl;
     else if(a=="Get Front")
        cout<<dq.front()<<endl;


   }
}

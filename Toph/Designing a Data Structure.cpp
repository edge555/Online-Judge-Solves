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
   string a,b;
   deque<int>dq;
   multiset<int>ms;
   multiset<int>::iterator it;
   multiset<int>::reverse_iterator itr;
   while(n--)
   {
     cin>>a>>b;
     if(a=="Insert" && b=="Back")
     {
         cin>>p;
         dq.push_back(p);
         ms.insert(p);

     }
     else if(a=="Insert" && b=="Front")
     {
         cin>>p;
         dq.push_front(p);
         ms.insert(p);

     }
     else if(a=="Get" && b=="Max"){
        itr=ms.rbegin();
        cout<<*itr<<endl;
     }
     else if(a=="Get" && b=="Min"){
        it=ms.begin();
        cout<<*it<<endl;
     }
     else if(a=="Erase" && b=="Back"){
        it=ms.find(dq.back());
        ms.erase(it);
        dq.pop_back();

     }
     else if(a=="Erase" && b=="Front"){
        it=ms.find(dq.front());
        ms.erase(it);
        dq.pop_front();
     }
     else if(a=="Get" && b=="Back")
        cout<<dq.back()<<endl;
     else if(a=="Get" && b=="Front")
        cout<<dq.front()<<endl;
   }
}

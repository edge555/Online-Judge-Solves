#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{
    int i,n;
    sf(n);
    for (i=1;i<=n;i++)
    {
       int a,b,l,p;
       sff(a,b);
       pf("Case %d:\n",i);

       int k=0;
       string s;

       deque<int>dq;
       while (b--)
       {
         cin>>s;
         if (s=="pushLeft")
         {
            cin>>l;
            if(dq.size()==a)
                cout<<"The queue is full"<<endl;

            else
            {
               dq.push_front(l);
               pf("Pushed in left: %d\n",l);
            }
         }
         else if(s=="pushRight")
         {
           cin>>l;
           if(dq.size()==a)

               cout<<"The queue is full"<<endl;

           else
           {
             dq.push_back(l);
             pf("Pushed in right: %d\n",l);
           }
         }

         else if(s=="popLeft")
         {
             if(dq.empty())

                 cout<<"The queue is empty"<<endl;

             else
             {
                 cout<<"Popped from left: "<<dq.front()<<endl;
                 dq.pop_front();
             }


         }
         else if(s=="popRight")
         {
             if(dq.empty())
                 cout<<"The queue is empty"<<endl;

              else
              {
                cout<<"Popped from right: "<<dq.back()<<endl;
                dq.pop_back();
              }

         }

        }
    }
}

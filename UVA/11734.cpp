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
bool chkpali(string a)
{
    return a==string(a.rbegin(),a.rend());
}
int main()
{
   int n,i,j;
   cin>>n;
   getchar();
   for (int j=1;j<=n;j++)
   {
       string x,y,a,b,c;
       getline(cin,x);
       getline(cin,y);
       pf("Case %d: ",j);
       if(x==y)
        cout<<"Yes"<<endl;
       else
       {
       for (i=0;i<x.size();i++)
       {
        if(x[i]!=' ')
            a.push_back(x[i]);
       }
       for (i=0;i<y.size();i++)
       {
        if(y[i]!=' ')
            b.push_back(y[i]);
       }
       if(a==b)
        cout<<"Output Format Error"<<endl;
       else
        cout<<"Wrong Answer"<<endl;
       }
   }
}

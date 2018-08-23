#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;
#define N 5005
bool leap(int n)
{
    if (n%4==0 && n%100!=0)
        return true;
    if (n%400==0)
        return true;
    return false;
}

int main()
{
    vector<string>vec;
    vec.pb("Jan");
    vec.pb("Feb");
    vec.pb("Mar");
    vec.pb("Apr");
    vec.pb("May");
    vec.pb("Jun");
    vec.pb("Jul");
    vec.pb("Aug");
    vec.pb("Sep");
    vec.pb("Oct");
    vec.pb("Nov");
    vec.pb("Dec");
    int t;
    sf(t);
    while(t--)
    {
       int d,m,y;
       scanf("%d %d %d",&d,&m,&y);
       if(m==2)
       {
          if(leap(y)==true)
          {
              if(d==29)
              {
                d=1;m++;
              }
              else
                d++;
          }
          else
          {
            if(d==28)
            {
                d=1;
                m++;
            }
            else
                d++;
          }
       }
       else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
       {
           if(d==31)
           {
               d=1;
               m++;
           }
           else
            d++;
       }
       else if(m==4 || m==6 || m==9 || m==11)
       {
           if(d==30)
           {
               d=1;
               m++;
           }
           else
            d++;
       }
       else
       {
           if(d==31)
           {
               d=1;m=1;y++;
           }
           else
            d++;
       }
       printf("%02d ",d);
       cout<<vec[m-1];
       printf(", %d\n",y);
    }
}

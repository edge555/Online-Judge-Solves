#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll ara[16],i,j;
   for(i=0;i<14;i++)
    cin>>ara[i];
 
   ll mx=-1;
   for(i=0;i<14;i++)
   {
        ll temp=ara[i];
        ll per=ara[i]/14;

        ll araa[14];
        memset(araa,0,sizeof araa);
        for(j=0;j<14;j++)
        {
            if(j==i)
                araa[j]=per;
            else
                araa[j]=ara[j]+per;
        }
        ll k=temp%14;
        ll t=i+1;
        while(k)
        {
            if(t==14)
                t=0;
            araa[t]++;
            t++;
            k--;
        }
        ll ans=0;
        for(int n=0;n<14;n++)
        {
            if(araa[n]%2==0)
                ans+=araa[n];
        }
        mx=max(mx,ans);
   }
   cout<<mx;
}

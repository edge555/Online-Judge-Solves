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
    int k;
    cin>>k;
    while(k--)
    {
       unordered_map<string,int>mp;
       unordered_map<string,bool>chk;
       vector<string>vec;
       int n,i;
       sf(n);
       cin.ignore();
       string a;
       while(n--)
       {
         getline(cin,a);
         vec.push_back(a);
         mp[a]++;
         chk[a]=false;

       }
       sort(vec.begin(),vec.end());
       for (auto it=vec.begin();it!=vec.end();it++)
       {
           if(chk[*it]==false)
           {
               cout<<*it<<" "<<mp[*it]<<endl;
               chk[*it]=true;
           }
       }
       cout<<endl;
    }
}

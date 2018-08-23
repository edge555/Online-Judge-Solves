#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
ll t,n,k;
scanf("%lld",&t);

for(ll ca = 1;ca<=t;ca++)
{
  scanf("%lld %lld",&n,&k);
  string s = "";

  for(ll i = 0;i<n;i++)
  {
    s = s + (char)(i+'A');
  }

  printf("Case %lld:\n",ca);

  do{
    cout<<s<<endl;
    k--;
  }while(k && next_permutation(s.begin(),s.end()));

}

return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}
int main()
{
   string ara;
   cin>>ara;
   int i;
   for (i=0;i<ara.size();i++)
       ara[i]=tolower(ara[i]);
   
   for (i=0;i<ara.size();i++)
   {
       if (!isVowel(ara[i]))
        cout<<"."<<ara[i];
   }
   cout<<endl;
}

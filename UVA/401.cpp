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
int i;
int main()
{
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char,char>mp;
    for (i=0;i<s1.size();i++)
        mp[s1[i]]=s2[i];

    string a;
    while(getline(cin,a))
    {
        bool pali=true,mrr=true;
        int k=a.size();
        for (i=0;i<=k/2;i++)
        {
            if(a[i]!=a[k-1-i])
                pali=false;
            if(a[k-1-i]!=mp[a[i]])
                mrr=false;
        }

        if (pali==true && mrr==true)
            cout<<a<<" -- is a mirrored palindrome.\n"<<endl;
        else if(pali==true && mrr==false)
            cout<<a<<" -- is a regular palindrome.\n"<<endl;
        else if(pali==false && mrr==true)
            cout<<a<<" -- is a mirrored string.\n"<<endl;
        else
            cout<<a<<" -- is not a palindrome.\n"<<endl;
    }
}

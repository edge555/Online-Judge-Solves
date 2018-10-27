#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int main()
{
    char ara[10000],ara2[10000];
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int i,j,a,b,k,m=0;
        gets(ara);
        gets(ara2);
        a=strlen(ara);
        b=strlen(ara2);
        if (a!=b)
            cout<<"No"<<endl;
        else
        {
           for (i=0;i<a;i++)
           {
               if (isVowel(ara[i])==1)
                    ara[i]='a';
                if (isVowel(ara2[i])==1)
                    ara2[i]='a';
           }
           k=strcmp(ara,ara2);
           if (k==0)
            cout<<"Yes"<<endl;
           else
            cout<<"No"<<endl;
        }
    }
}


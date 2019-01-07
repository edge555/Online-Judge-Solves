#include<bits/stdc++.h>
using namespace std;

bool chkpali(string s)
{
    if (s==string(s.rbegin(),s.rend()))
        return true;
    else
        return false;
}
int main()
{
    string s;
    cin>>s;
    int maxlen=0;
    int len=s.length();
    int a=0,b=len;
    if(!chkpali(s)){
        cout<< s.length();
        return 0;
    }
    for(int i=a;i<b;i++)
        for(int j=a;j<b;j++)
    {
        string chk=s.substr(i,j);
        if(!chkpali(chk))
        {
            if(maxlen<chk.length())
                maxlen=chk.length();
        }
    }
    cout<<maxlen;
}

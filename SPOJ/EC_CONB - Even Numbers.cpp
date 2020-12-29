#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf(n) scanf("%d",&n)
#define rep(i,n) for(i=1;i<=n;i++)
#define all(x) (x).begin(),(x).end()

string decimalToBinary(int n)
{
    string s = bitset<64>(n).to_string();
    const auto loc1 = s.find('1');
    if(loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n;
        sf(n);
        if(n&1)
            pf("%d\n",n);
        else
        {
            string a=decimalToBinary(n);
            reverse(all(a));
            const auto loc1 = a.find('1');
            if(loc1 != string::npos)
                a=a.substr(loc1);
            pf("%d\n",binaryToDecimal(a));
        }
    }
}

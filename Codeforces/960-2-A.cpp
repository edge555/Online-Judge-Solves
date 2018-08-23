#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    if(s[0] != 'a')
    {
        cout << "NO";
        return 0;
    }
    int a = 0, b = 0, c = 0;
    int i = 0;
    while(s[i] == 'a' && i < s.size())
    {
        i++;
        a++;
    }
    while(s[i] == 'b' && i < s.size())
    {
        i++;
        b++;
    }
    if(s[i] == 'a')
    {
        cout << "NO";
        return 0;
    }
    while(s[i] == 'c' && i < s.size())
    {
        i++;
        c++;
    }
    if(i < s.size())
        cout << "NO";
    else if(a == 0 || b == 0)
        cout << "NO";
    else if(c == a || c == b)
        cout << "YES";
    else
        cout << "NO";

}

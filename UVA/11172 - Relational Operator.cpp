#include <iostream>
using namespace std;
int main ()
{
    int a,b,t,i;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>a>>b;
        if (a<b)
            cout <<"<"<<endl;
        else if (a>b)
            cout<<">"<<endl;
        else
            cout<<"="<<endl;
    }
}

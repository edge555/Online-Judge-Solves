#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ara[100000];
    char eng[]="HELLO",fra[]="BONJOUR",spa[]="HOLA",rus[]="ZDRAVSTVUJTE",ita[]="CIAO",ger[]="HALLO";
    int i;
    for (i=1;;i++)
    {
        gets(ara);
        if (ara[0]=='#')
            break;
        else if (strcmp(ara,eng)==0)
            printf ("Case %d: ENGLISH\n",i);
        else if (strcmp(ara,fra)==0)
            printf ("Case %d: FRENCH\n",i);
        else if (strcmp(ara,spa)==0)
            printf ("Case %d: SPANISH\n",i);
        else if (strcmp(ara,rus)==0)
            printf ("Case %d: RUSSIAN\n",i);
        else if (strcmp(ara,ita)==0)
            printf ("Case %d: ITALIAN\n",i);
        else if (strcmp(ara,ger)==0)
            printf ("Case %d: GERMAN\n",i);
        else
            printf ("Case %d: UNKNOWN\n",i);
    }
}

#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n,k;
    in1(n);
    while (n--)
    {
       in1(k);
       if (k==1)
            pf("Bir Sreshtho Captain Mohiuddin Jahangir: Amra Tomay Vulbo Na.\n");
      else if (k==2)
            pf("Bir Sreshtho Sepahi Hamidur Rahman: Amra Tomay Vulbo Na.\n");
        else if (k==3)
            pf("Bir Sreshtho Sepahi Muhammad Mustafa: Amra Tomay Vulbo Na.\n");
        else if (k==4)
            pf("Bir Sreshtho Engine Room Artificer Mohammad Ruhul Amin: Amra Tomay Vulbo Na.\n");
        else if (k==5)
            pf("Bir Sreshtho Flight Lieutenant Matiur Rahman: Amra Tomay Vulbo Na.\n");
        else if (k==6)
            pf("Bir Sreshtho Lance Naik Munshi Abdur Rouf: Amra Tomay Vulbo Na.\n");
        else if (k==7)
            pf("Bir Sreshtho Lance Naik Noor Mohammad Sheikh: Amra Tomay Vulbo Na.\n");

    }
}


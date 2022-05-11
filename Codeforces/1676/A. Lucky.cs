using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Globalization;
using System.Numerics;

namespace ConsoleApp1
{ 
    class Solution
    {
        static void Main(string[] args)
        {
            int t, tc;
            tc = int.Parse(Console.ReadLine());
            for (t = 1; t <= tc; t++)
            {
                string s=Console.ReadLine();
                int sum = s[0] - '0' + s[1] - '0' + s[2] - '0';
                int sum2 = s[3] - '0' + s[4] - '0' + s[5] - '0';
                if (sum == sum2)
                {
                    Console.WriteLine("YES");
                }
                else
                {
                    Console.WriteLine("NO");
                }
            }
        }
    }
}
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
                int n =int.Parse(Console.ReadLine());
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int mn = Int32.MaxValue;
                foreach(int i in let)
                {
                    mn = Math.Min(mn, i);
                }
                int sum = 0;
                foreach(int i in let)
                {
                    sum += i - mn;
                }
                Console.WriteLine(sum);
            }
        }
    }
}
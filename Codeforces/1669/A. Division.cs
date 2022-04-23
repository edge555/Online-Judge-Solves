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
            int tc = int.Parse(Console.ReadLine());
            for(int t=1; t<=tc; t++) { 
                int n = int.Parse(Console.ReadLine());
                if (n <= 1399)
                {
                    Console.WriteLine("Division 4");
                }
                else if (n <= 1599)
                {
                    Console.WriteLine("Division 3");
                }
                else if (n <= 1899)
                {
                    Console.WriteLine("Division 2");
                }
                else
                    Console.WriteLine("Division 1");
            }
        }
    }
}
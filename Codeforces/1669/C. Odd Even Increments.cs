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
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                bool even0 = false, even1 = false;
                bool odd0 = false, odd1 = false;
                for(int i=0;i<let.Length;i++) 
                {
                        if (let[i] % 2 == 1)
                        {
                            if (i % 2 == 0)
                            {
                                even1 = true;
                            }
                            else
                            {
                                odd1 = true;
                            }
                        }
                        else
                        {
                            if (i % 2 == 0)
                            {
                                even0 = true;
                            }
                            else
                            {
                                odd0 = true;
                            }
                        }
                }
                if((odd0 && odd1) || (even0 && even1))
                {
                    Console.WriteLine("No");
                }
                else
                {
                    Console.WriteLine("Yes");
                }
   
            }
        }
    }
}
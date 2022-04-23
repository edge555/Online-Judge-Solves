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
                Dictionary<int, int> map = new Dictionary<int, int>();
                int ans = -1;
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                foreach (int k in let)
                {
                    if (map.ContainsKey(k))
                    {
                        map[k]++;
                        if (map[k] >= 3)
                        {
                            ans = k;
                        }
                    }
                    else
                    {
                        map.Add(k, 1);
                    }
                }
                Console.WriteLine(ans);
            }
        }
    }
}
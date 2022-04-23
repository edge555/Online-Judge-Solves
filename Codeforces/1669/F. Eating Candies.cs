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
                Dictionary<int,int> dict = new Dictionary<int,int>();
                int sum = 0;
                for(int i = let.Length - 1; i >= 0; i--)
                {
                    sum += let[i];
                    dict[sum] = i;
                }
                sum = 0;
                int ans = 0;
                for(int i = 0; i < n; i++)
                {
                    sum += let[i];
                    if (dict.ContainsKey(sum))
                    {
                        int j = dict[sum];
                        if (i < j)
                        {
                            ans = Math.Max(ans, i + 1 + n - j);
                        }
                    }
                }
                Console.WriteLine(ans);
            }
        }
    }
}
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
        static int func(string s,string t)
        {
            int sum = 0;
            for(int i = 0; i < s.Length; i++)
            {
                int x = s[i] - 'a', y = t[i] - 'a';
                sum += Math.Abs(x-y);
            }
            return sum;
        }
        static void Main(string[] args)
        {
            int t, tc;
            tc = int.Parse(Console.ReadLine());
            for (t = 1; t <= tc; t++)
            {
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int n = let[0],len=let[1];
                List<string>list = new List<string>();
                for(int i = 0; i < n; i++)
                {
                    string s = Console.ReadLine();
                    list.Add(s);
                }
                List<int> diff = new List<int>();
                for (int i = 0; i < n-1; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        int r = func(list[i], list[j]);
                        //Console.WriteLine(list[i] + " " + list[j] + " " + r);
                        diff.Add(r);
                    }
                }
                diff.Sort();
                Console.WriteLine(diff[0]);
            }
        }
    }
}
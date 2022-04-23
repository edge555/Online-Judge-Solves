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
        static HashSet<string> getDiffStr(string s)
        {
            HashSet<string> diffStr = new HashSet<string>();
            for(char c = 'a'; c <= 'z'; c++)
            {
                string t= s[0]+""+c;
                if(s!=t)
                    diffStr.Add(t);
            }
            for (char c = 'a'; c <= 'z'; c++)
            {
                string t = c + "" + s[1];
                if(s!=t)
                    diffStr.Add(t);
            }
            return diffStr;
        }
        static void Main(string[] args)
        {
            int tc = int.Parse(Console.ReadLine());
            for(int t=1; t<=tc; t++) { 
                int n = int.Parse(Console.ReadLine());
                Dictionary<string,int>dict = new Dictionary<string,int>();
                List<string>list = new List<string>();
                for(int i = 0; i < n; i++)
                {
                    string s = Console.ReadLine();
                    list.Add(s);
                    if (dict.ContainsKey(s))
                    {
                        dict[s]++;
                    }
                    else
                    {
                        dict.Add(s, 1);
                    }
                }
                long ans = 0;
                foreach(string s in list)
                {
                    dict[s]--;
                    HashSet<string> diffStr = getDiffStr(s);
                    foreach(string s2 in diffStr)
                    {
                        if (dict.ContainsKey(s2))
                        {
                            ans += dict[s2];
                        }
                    }
                }
                Console.WriteLine(ans);
            }
        }
    }
}
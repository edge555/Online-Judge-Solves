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
        static bool valid(int x, int y, int n, int m)
        {
            return x >= 0 && x < n && y >= 0 && y < m;        
        }

        static void Main(string[] args)
        {
            int t, tc;
            tc = int.Parse(Console.ReadLine());
            for (t = 1; t <= tc; t++)
            {
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int n = let[0], k = let[1];
                int[] ara=new int[n];
                ara = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                SortedDictionary<int,int> map = new SortedDictionary<int,int>();
                foreach(int i in ara)
                {
                    if (map.ContainsKey(i))
                    {
                        map[i]++;
                    }
                    else
                    {
                        map.Add(i, 1);
                    }
                }
                List<KeyValuePair<int,int>> list = new List<KeyValuePair<int, int>>();
                foreach (KeyValuePair<int,int>kv in map)
                {
                    list.Add(kv);
                }
                int ans = 0, x = -1, y = -1;
                for(int i = 0; i < list.Count;)
                {
                    KeyValuePair<int, int> kv = list[i];
                    if (kv.Value >= k)
                    {
                        int st = i,last=-1;
                        while (i < list.Count)
                        {
                            if (list[i].Value >= k)
                            {
                                if (last == -1)
                                {
                                    last = list[i].Key;
                                    i++;
                                }
                                else if (last + 1 == list[i].Key)
                                {
                                    last= list[i].Key;
                                    i++;
                                }
                                else
                                {
                                    last = -1;
                                    break;
                                }
                            }
                            else
                            {
                                last = -1;
                                break;
                            }
                        }
                        int en = i-1;
                        int len = en - st + 1;
                        if (len > ans)
                        {
                            ans = len;
                            x = list[st].Key;
                            y = list[en].Key;
                        }
                    }
                    else
                    {
                        i++;
                    }
                }
                if(x==-1 || y == -1)
                {
                    Console.WriteLine("-1");
                }
                else
                {
                    Console.WriteLine(x + " " + y);
                }
            }
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CF
{
    public class Novice_s_Mistake
    {
        public void IsNovice()
        {
            int T = int.Parse(Console.ReadLine().Trim());

            while(T > 0)
            {

                int n = int.Parse(Console.ReadLine().Trim());
                string sn = n.ToString();
                int lenN = sn.Length;
                List<(int, int)> ans = new List<(int, int)>();


                for (int j = 1; j <= 10000; j++)
                {
                    int minB = Math.Max(1, lenN * j - 5);
                    int maxB = lenN * j;


                    for (int b = minB; b < maxB; b++)
                    {
                        int x = n * j - b;
                        int y = 0;
                        int len = lenN * j - b;


                        for (int k = 0; k < len; k++)
                        {
                            y = y * 10 + (sn[k % lenN] - '0');
                        }


                        if (x == y)
                        {
                            ans.Add((j, b));
                        }
                    }
                }


                //Console.WriteLine(ans.Count);


                foreach (var p in ans)
                {
                    Console.WriteLine($"{p.Item1} {p.Item2}");
                }

                T--;
            }
        }
    }
}

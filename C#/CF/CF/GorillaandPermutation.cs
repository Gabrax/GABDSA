using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CF
{
    public class GorillaandPermutation
    {
        public void NwordMutation()
        {
            int t = int.Parse(Console.ReadLine().Trim());

            for (int i = 0; i < t; i++)
            {
                var input = Console.ReadLine().Trim().Split();
                int n = int.Parse(input[0]);
                int m = int.Parse(input[1]);
                int k = int.Parse(input[2]);

                List<int> result = new List<int>();

                // Add numbers from n to m+1 (exclusive) in descending order
                for (int x = n; x > m; x--)
                {
                    result.Add(x);
                }

                // Add numbers from 1 to m (inclusive) in ascending order
                for (int x = 1; x <= m; x++)
                {
                    result.Add(x);
                }

                Console.WriteLine(string.Join(" ", result));
            }
        }
    }
}

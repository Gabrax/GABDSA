using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LC
{
    public class ContainsDuplicate
    {
        public bool IsDistinct(int[] nums)
        {
            Dictionary<int, int> result = new Dictionary<int, int>();

            foreach (int x in nums)
            {
                if (result.ContainsKey(x)) result[x]++;
                else result[x] = 1;
            }

            foreach (var x in result)
            {
                if (x.Value > 1)
                {
                    return true;
                }
            }
            return false;
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LC
{
    public class TopKFrequent
    {
        public int[] TopK(int[] nums, int k)
        {
            Dictionary<int,int> result = new Dictionary<int,int>();

            foreach (int x in nums) 
            {
                if(result.ContainsKey(x)) result[x]++;
                else result[x] = 1;
            }

            return GetTopKElements(result, k);
        }
        static int[] GetTopKElements(Dictionary<int, int> dic, int k)
        {
            List<KeyValuePair<int,int>> list = new List<KeyValuePair<int,int>>(dic);

            list.Sort((pair1,pair2) => pair2.Value.CompareTo(pair1.Value));
            int[] result = new int[k];
            for (int i = 0; i < k && i < list.Count; i++) { result[i] = list[i].Key; }
            return result;
        }
    }
}

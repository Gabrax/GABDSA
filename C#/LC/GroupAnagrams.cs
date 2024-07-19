using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace LC
{
    public class GroupAnagrams
    {
        public IList<IList<string>> plsGroupAnagrams(string[] strs)
        {
            Dictionary<string, IList<string>> dic = new Dictionary<string, IList<string>>();

            for (int i = 0; i < strs.Length; i++)
            {
                string str = strs[i];
                string res_str = String.Concat(str.OrderBy(c => c));

                if (!dic.ContainsKey(res_str)) { dic[res_str] = new List<string>(); }

                dic[res_str].Add(str);
            }

            IList<IList<string>> list = new List<IList<string>>();

            foreach (var str in dic) { list.Add(str.Value); }

            return list;
        }
    }
}

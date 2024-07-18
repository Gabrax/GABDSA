using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LC
{
    public class ValidAnagram
    {
        public bool IsAnagram(string s, string t)
        {
            if(s.Length != t.Length) { return false; }

            string res1 = String.Concat(s.OrderBy(c => c));
            string res2 = String.Concat(t.OrderBy(c => c));
            if(res1 != res2) { return false; }

            return true;
        }

        public bool IsAnagram2(string s, string t)
        {
            Dictionary<char,int> result = new Dictionary<char,int>();
            
            if (s.Length != t.Length) { return false; }

            foreach (char x in s)
            {
                if (result.ContainsKey(x)) result[x]++;
                else result[x] = 1;
            }
            foreach (char x in t)
            {
                if (result.ContainsKey(x)) result[x]--;
            }
            foreach (var x in result)
            {
                if(x.Value > 0) { return false; }
            }

            return true;
        }
    }
}

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
            if (s.Length != t.Length) { return false; }

            string res1 = String.Concat(s.OrderBy(c => c));
            string res2 = String.Concat(t.OrderBy(c => c));
            if (res1 != res2) { return true; }

            return false;
        }
    }
}

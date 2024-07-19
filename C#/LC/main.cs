using LC;
using Microsoft.VisualBasic;

ContainsDuplicate containsDuplicate = new ContainsDuplicate();

int[] nums = { 1, 1, 2, 3 };
bool res = containsDuplicate.IsDistinct(nums);

if (res) { Console.WriteLine("Duplicate"); }
else
{
    Console.WriteLine("Distinct");
}

ValidAnagram validAnagram = new ValidAnagram();

string heh = "car";
string heh1 = "car";

Console.WriteLine(validAnagram.IsAnagram2(heh,heh1));


TwoSum twoSum = new TwoSum();

int[] nums2 = [3, 2, 4];
int[] res2 = twoSum.MakeTwoSum(nums2,6);

foreach (int x in res2 ) { Console.WriteLine(x); }

GroupAnagrams anagrams = new GroupAnagrams();

string[] strs = ["eat", "tea", "tan", "ate", "nat", "bat"];

IList<IList<string>> list = anagrams.plsGroupAnagrams(strs);

foreach (var list2 in list) 
{
    foreach (var strings in list2)
    {
        Console.WriteLine(strings);
    }
    Console.WriteLine();
}

TopKFrequent kFrequent = new TopKFrequent();

int[] arr = { 1, 1, 1, 2, 2, 3 };
int k = 2;

var result = kFrequent.TopK(arr, k);

foreach (var key in result)
{
    Console.WriteLine(key);
}
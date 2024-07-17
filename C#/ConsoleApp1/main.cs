using LC;

ContainsDuplicate containsDuplicate = new ContainsDuplicate();
ValidAnagram validAnagram = new ValidAnagram();
int[] nums = {1,1,2,3};

bool res = containsDuplicate.IsDistinct(nums);

string heh = "ameis";
string heh1 = "ameit";

Console.WriteLine(validAnagram.IsAnagram(heh,heh1));

if (res) { Console.WriteLine("Duplicate"); } else{
    Console.WriteLine("Distinct");
}

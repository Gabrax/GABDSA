using LC;

ContainsDuplicate containsDuplicate = new ContainsDuplicate();
ValidAnagram validAnagram = new ValidAnagram();

int[] nums = {1,1,2,3};


string heh = "car";
string heh1 = "car";

Console.WriteLine(validAnagram.IsAnagram2(heh,heh1));

bool res = containsDuplicate.IsDistinct(nums);

if (res) { Console.WriteLine("Duplicate"); } else{
    Console.WriteLine("Distinct");
}

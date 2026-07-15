public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        var mp = new Dictionary<int, int>();

        foreach(var num in nums){
            if(mp.ContainsKey(num)){
                return true;
            }

            mp[num] = 1;
        }

        return false;
    }
}
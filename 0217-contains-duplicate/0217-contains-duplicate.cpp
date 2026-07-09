class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> isPresent;

        for(auto num : nums){
            if(isPresent[num]){
                return true;
            }
            
            isPresent[num] = true;
        }

        return false;
    }
};
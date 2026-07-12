class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        vector<vector<string>> result;

        for(auto str: strs){
            string key = str;
            sort(key.begin(), key.end());

            anagram[key].push_back(str);
        }

        for(auto [k, v]: anagram){
            result.push_back(v);
        }

        return result;
    }
};
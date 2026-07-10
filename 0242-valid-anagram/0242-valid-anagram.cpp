class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp_s, mp_t;

        for(auto ch: s) mp_s[ch]++;
        for(auto ch: t) mp_t[ch]++;

        for(char c = 'a'; c <= 'z'; c++){
            if(mp_s[c] != mp_t[c]) return false;
        }

        return true;
    }
};
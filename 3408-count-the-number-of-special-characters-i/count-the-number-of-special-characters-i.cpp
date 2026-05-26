class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> mp;
        for(char ch : word) mp[ch]++;
        
        int ans = 0;
        for(char ch = 'a'; ch <= 'z'; ch++) {
            if(mp.find(ch) != mp.end() &&
               mp.find(ch - 32) != mp.end()) {
                ans++;
            }
        }
        return ans;
    }
};
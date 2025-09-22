class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0, maxi = 0;
        unordered_map<int,int> mp;
        for (int num : nums) {
            mp[num]++;
        }

        for(auto& pair: mp){
            maxi = max(maxi, pair.second);
        }
        for(auto& pair: mp){
            if(pair.second == maxi){
                ans += pair.second;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i: nums){
            if(mp[i] == 1){
                ans.push_back(i);
            }
            mp[i]++;
        }
        return ans;
    }
};
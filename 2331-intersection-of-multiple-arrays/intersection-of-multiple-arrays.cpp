class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        
        int cnt = 1;
        for(auto num: nums){
            for(int i = 0; i<num.size(); i++){
                if(mp[num[i]] == cnt) continue;
                mp[num[i]]++;
            }
            cnt++;
        }
        vector<int> ans;
        for(auto& pair: mp){
            if(pair.second == n){
                ans.push_back(pair.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
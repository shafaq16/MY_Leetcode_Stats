// class Solution {
// public:
//     vector<int> intersection(vector<vector<int>>& nums) {
//         int n = nums.size();
//         unordered_map<int,int> mp;
        
//         int cnt = 1;
//         for(auto num: nums){
//             for(int i = 0; i<num.size(); i++){
//                 if(mp[num[i]] == cnt) continue;
//                 mp[num[i]]++;
//             }
//             cnt++;
//         }
//         vector<int> ans;
//         for(auto& pair: mp){
//             if(pair.second == n){
//                 ans.push_back(pair.first);
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };



//since inside array contains only distincts integers
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums[i].size(); j++){
                mp[nums[i][j]]++;
            }
        }
    vector<int>ans;
        for(auto it: mp){
            if(it.second == nums.size()){          
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
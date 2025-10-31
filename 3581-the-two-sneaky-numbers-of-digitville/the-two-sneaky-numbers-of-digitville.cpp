class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       int n = nums.size()-2;
        int a=0,b=0, Xor = 0;
        for(int i = 0; i<nums.size() ;i++){
            Xor ^= nums[i]^(i<n?i:0);
       }
        int diffBit = Xor & -Xor;
        for (int num : nums) {
            if ((num & diffBit) == 0) a ^= num;
            else b ^= num;
        }
        for (int i = 0; i < n; i++) {
            if ((i & diffBit) == 0) a ^= i;
            else b ^= i;
        }
        return {a,b};
    }
};




// class Solution {
// public:
//     vector<int> getSneakyNumbers(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> ans;
//         for(int i = 1; i<nums.size(); i++){
//              if(nums[i]==nums[i-1]) ans.push_back(nums[i]);
//         }
//         return ans;
//     }
// };




// class Solution {
// public:
//     vector<int> getSneakyNumbers(vector<int>& nums) {
//         vector<int> ans;
//         unordered_map<int,int> mp;
//         for(int i: nums){
//             if(mp[i] == 1){
//                 ans.push_back(i);
//             }
//             mp[i]++;
//         }
//         return ans;
//     }
// };
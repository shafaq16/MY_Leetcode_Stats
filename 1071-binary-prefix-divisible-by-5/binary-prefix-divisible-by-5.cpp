// class Solution {
// public:
//     vector<bool> prefixesDivBy5(vector<int>& nums) {
//         vector<bool> ans;
//         string s;
//         for(int i = 0; i<nums.size(); i++){
//            s += char('0' + nums[i]);

//             int rem = 0;
//             for(char c: s){
//                 rem = (rem*2 + (c-'0')) % 5;     
//             }
//             if(rem == 0){
//                     ans.push_back(true);
//                 }
//                 else{
//                     ans.push_back(false);
//                 }
//         }
//         return ans;
//     }
// };



//  OPTIMAL APPROACH
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int rem = 0;
        for (int v : nums) {
            rem = (rem * 2 + v) % 5;
            ans.push_back(rem == 0);
        }
        return ans;
    }
};

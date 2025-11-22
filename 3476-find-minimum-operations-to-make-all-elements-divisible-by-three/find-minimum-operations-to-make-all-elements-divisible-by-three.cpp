class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i: nums){
            if(i%3 == 0) cnt++;
        }
        return n-cnt;
    }
};


// method 2
// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         int cnt = 0;
//         for(int i = 0; i<nums.size(); i++){
//             if(nums[i]%3==0) continue;
//             else cnt++; 
//         }
//         return cnt;
//     }
// };
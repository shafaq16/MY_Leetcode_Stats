class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int j = nums.size()-2; j>=0; j-=2){
            ans += nums[j];
        }
        return ans;
    }
};
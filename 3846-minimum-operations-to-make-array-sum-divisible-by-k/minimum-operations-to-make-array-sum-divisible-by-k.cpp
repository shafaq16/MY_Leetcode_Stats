class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1){
            return nums[0]%k;
        }
        int sum=0;
        for(int i:nums){
            sum += i;
        }
        return sum%k;
    }
};
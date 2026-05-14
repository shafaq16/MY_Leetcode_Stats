class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 1; i<n-1; i++){
            if(nums[i]==nums[i-1]) return false;
        }
        int maxi = nums[n-1];
        if( ((maxi+1) == n) && nums[n-1]==nums[n-2]) 
            return true;
        return false; 
    }
};
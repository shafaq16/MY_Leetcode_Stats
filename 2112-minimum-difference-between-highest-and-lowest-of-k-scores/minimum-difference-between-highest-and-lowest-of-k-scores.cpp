class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==1)return 0;
        int ans =  INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i =0; i<= n-k; i++){
            int maxi = 0;
            for(int j = i; j<i+k ; j++){
                maxi = max(maxi,nums[j]);
            }
                ans = min(ans,maxi-nums[i]);
        }
        return ans;
    }
};
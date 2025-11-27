class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = LONG_LONG_MIN, sum = 0;
        vector<long long> minPref(k,LLONG_MAX/2);
        minPref[k-1] = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            ans = max(ans, sum-minPref[i%k]);
            minPref[i%k] = min(minPref[i%k],sum);    
        }        
        return ans;
    }
};
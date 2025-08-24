class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int zeroCnt = 0, maxi = 0;
        
        while (r < n) {
            if (nums[r] == 0) {
                zeroCnt++;
            }
            
            while (zeroCnt > 1) {
                if (nums[l] == 0) {
                    zeroCnt--;
                }
                l++;
            }
            
            maxi = max(maxi, r - l);
            r++;
        }
        
        return maxi;
    }
};
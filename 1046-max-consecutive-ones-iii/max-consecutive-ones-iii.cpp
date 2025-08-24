class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    
        int n = nums.size();
        int l = 0, r = 0;
        int zeroCnt = 0, maxi = 0;
        
        while (r < n) {
            if (nums[r] == 0) {
                zeroCnt++;
            }
            
            while (zeroCnt > k) {
                if (nums[l] == 0) {
                    zeroCnt--;
                }
                l++;
            }
            
            maxi = max(maxi, r - l + 1);
            r++;
        }
        
        return maxi;
    }
};

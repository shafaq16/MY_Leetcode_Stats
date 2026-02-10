class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int l = 0; l < n; l++) {
            unordered_set<int> ev, odd;

            for (int r = l; r < n; r++) {
                if (nums[r] % 2 == 0) ev.insert(nums[r]);
                else odd.insert(nums[r]);

                if (ev.size() == odd.size()) {
                    ans = max(ans, r - l + 1);
                }
            }
        }
        return ans;
    }
};

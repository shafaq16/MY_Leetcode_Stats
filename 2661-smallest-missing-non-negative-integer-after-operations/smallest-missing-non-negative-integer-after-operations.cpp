class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        unordered_map<int,long long> mp;
        
        for(int i = 0; i<n; i++){
            mp[((nums[i] % value) + value) % value]++;
        }

        for (int i = 0; i <= n; i++) {
            int r = i % value;
            if (mp[r] == 0) {
                return i;
            }
            mp[r]--;
        }

        return 0;
    }
};
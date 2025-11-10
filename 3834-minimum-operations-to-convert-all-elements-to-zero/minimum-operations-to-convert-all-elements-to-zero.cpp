class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> stack;
        int ans = 0;
        for (int i : nums) {
            while (!stack.empty() && stack.back() > i)
                stack.pop_back();
            
            if (i == 0)
                continue;
            if (stack.empty() || stack.back() < i) {
                ans++;
                stack.push_back(i);
            }
        }
        return ans;
    }
};
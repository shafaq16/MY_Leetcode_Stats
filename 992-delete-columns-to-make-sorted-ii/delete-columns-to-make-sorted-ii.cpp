class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int ans = 0;
        // sorted[i] == true means strs[i] < strs[i+1] is already confirmed
        vector<bool> sorted(n - 1, false);

        for (int col = 0; col < m; ++col) {
            bool deleteColumn = false;
            // Check if keeping this column would cause any violation
            for (int i = 0; i < n - 1; ++i) {
                if (!sorted[i] && strs[i][col] > strs[i + 1][col]) {
                    // Violation found → delete this column
                    deleteColumn = true;
                    break;
                }
            }
            if (deleteColumn) {
                ans++;
            } else {
                // Update sorted for pairs confirmed by this column
                for (int i = 0; i < n - 1; ++i) {
                    if (strs[i][col] < strs[i + 1][col]) {
                        sorted[i] = true;
                    }
                }
            }
        }
        return ans;
    }
};

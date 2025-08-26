class Solution {
public:
    int findGCD(int a, int b) {
        if (a == 0)
            return b;
        return findGCD(b % a, a);
    }
    bool isGoodArray(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 1; i<nums.size(); i++){
            ans = findGCD(ans,nums[i]);
        }
        return ans==1? true: false;
    }
};
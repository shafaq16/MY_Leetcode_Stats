class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if((nums[i]&1) == 0) cnt++;
        }
        return cnt>=2? true: false;
    }
};
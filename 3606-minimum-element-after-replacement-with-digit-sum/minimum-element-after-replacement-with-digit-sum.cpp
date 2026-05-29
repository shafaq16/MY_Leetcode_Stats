class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int x: nums){
            int num = x;
            int sum = 0;
            while(num>0){
                int dig = num%10;
                num /= 10;
                sum += dig;
            }
            x = sum;
            mini = min(mini, sum);
        }
        return mini;
    }
};
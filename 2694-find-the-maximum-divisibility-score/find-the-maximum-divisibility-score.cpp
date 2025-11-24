class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans = INT_MAX;
        int maxScore = 0;
        for(int div: divisors){
            int score = 0;
            for(int num: nums){
                if(num%div == 0){
                    score++;
                }
            }
            if(score > maxScore){
                maxScore = score;
                ans = div;
            }
            else if (score == maxScore) {
                ans = min(ans,div);
            }
        }
        return ans;
    }
};
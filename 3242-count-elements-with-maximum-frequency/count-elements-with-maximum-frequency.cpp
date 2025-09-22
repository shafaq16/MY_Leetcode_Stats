class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        vector<int> freq(101, 0);
        for(auto& num: nums){
            freq[num]++;
        }
        int maxi = *max_element(freq.begin(), freq.end());
        int ans = 0;
        for(int i = 1; i<101; i++){
            if(freq[i]==maxi) ans += freq[i];
        }
        return ans;
    }
};
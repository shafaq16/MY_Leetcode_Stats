class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            if(nums[i]%2 ==0){
                mp[nums[i]]++;
            }
        }
        int maxfreq = 0;
        for(auto& p: mp){
            if(maxfreq < p.second){
                maxfreq = p.second;
                ans = p.first;
            }
            else if(maxfreq == p.second){
                if(p.first<ans){
                    ans=p.first;
                }
            }
        }
        return ans;
    }
};
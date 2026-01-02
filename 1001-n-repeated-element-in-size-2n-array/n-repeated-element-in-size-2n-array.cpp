class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i: nums){
            if(mp[i] == 1) return i;
            mp[i]++;
        }
        return 0;
    }
};
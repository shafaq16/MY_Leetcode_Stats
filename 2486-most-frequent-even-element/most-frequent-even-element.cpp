// class Solution {
// public:
//     int mostFrequentEven(vector<int>& nums) {
//         int n = nums.size();
//         int ans = -1;
//         unordered_map<int,int> mp;
//         for(int i = 0; i<n; i++){
//             if(nums[i]%2 ==0){
//                 mp[nums[i]]++;
//             }
//         }
//         int maxfreq = 0;
//         for(auto& p: mp){
//             if(maxfreq < p.second){
//                 maxfreq = p.second;
//                 ans = p.first;
//             }
//             else if(maxfreq == p.second){
//                 if(p.first<ans){
//                     ans=p.first;
//                 }
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int mostFrequentEven(std::vector<int>& nums) {
        int ans = -1;
        int freq = 0;
        unordered_map<int, int> mp;

        for (int i : nums) {
            if (i % 2 == 0) {
                mp[i]++;
                if (mp[i] > freq || (mp[i] == freq && i < ans)) {
                    ans = i;
                    freq = mp[i];
                }
            }
        }

        return freq==0? -1: ans;
    }
};
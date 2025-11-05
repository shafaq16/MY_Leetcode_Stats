class Solution {
public:
    int xSum(unordered_map<int,int>& mp, int x) {
        priority_queue<pair<int,int>> pq;
        for (auto& v : mp) {
            pq.push({v.second,v.first});
        }
        int sum = 0;
        while (!pq.empty() && x > 0) {
            auto num = pq.top();
            pq.pop();
            int cnt = num.first;
            int val = num.second;
            sum += cnt*val;
            x--;
        }
        return sum;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;

        int i = 0, j= 0;
        while(j<n){
            mp[nums[j]]++;

            if(j-i+1 == k){
                ans.push_back(xSum(mp,x));

                mp[nums[i]]--;
                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
       return ans;
    }
};

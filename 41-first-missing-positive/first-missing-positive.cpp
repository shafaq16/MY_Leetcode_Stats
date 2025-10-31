class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(n);
        for(int i: nums){
            if (i > 0 && i <= n)
                st.insert(i);
        }
        for(int i = 1; i<=n;i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        return n+1;
    }
};
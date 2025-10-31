class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while(i<n){
            if(nums[i]<=0 || nums[i]>=n) {
                i++;
                continue;
            }
            int actualPos = nums[i]-1;
            if(nums[actualPos]!=nums[i]){
                swap(nums[i], nums[nums[i]-1]);
            }else{
                i++;
            }
        }
        for(int i=1;i<=n;i++){
            if(nums[i-1]!=i) return i;
        }
        return n+1;
    }
};



// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();
//         unordered_set<int> st(n);
//         for(int i: nums){
//             if (i > 0 && i <= n)
//                 st.insert(i);
//         }
//         for(int i = 1; i<=n;i++){
//             if(st.find(i)==st.end()){
//                 return i;
//             }
//         }
//         return n+1;
//     }
// };
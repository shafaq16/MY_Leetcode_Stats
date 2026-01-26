// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         vector<vector<int>> ans;
//         sort(arr.begin(),arr.end());
//         int diff = INT_MAX;

//         for(int i = 0; i<arr.size()-1; i++){
//             diff = min(diff,arr[i+1]-arr[i]);
//         }

//         for(int i = 0; i<arr.size()-1; i++){
//             if(arr[i+1]-arr[i] == diff){
//                 ans.push_back({arr[i],arr[i+1]});
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int minDiff = INT_MAX;

        for(int i = 0; i<arr.size()-1; i++){
            int diff = arr[i+1]-arr[i];

            if(minDiff > diff){
                minDiff = diff;
                ans = {};
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(minDiff == diff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};
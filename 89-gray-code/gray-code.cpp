class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        if(n==0) return ans;
        ans.push_back(1);

        int p = 1; //power
        for(int i = 1; i < n ; i++){
            p *= 2;
            for(int j = ans.size()-1; j>=0 ; j--){
                ans.push_back(p + ans[j]);
            }
        }
        return ans;
    }
};
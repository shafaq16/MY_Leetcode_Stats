class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        vector<vector<int>> diag (n+m-1);
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m ; j++){
                diag[i+j].push_back(mat[i][j]);
            }
        }

        for(int d = 0; d<m+n-1; d++){
            if(d%2 == 0){
                reverse(diag[d].begin(), diag[d].end());
            }
            for(int val : diag[d]){
                ans.push_back(val);
            }
        }
        return ans;
    }
};
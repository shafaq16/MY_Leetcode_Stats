class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        for(int d = 0 ; d<n+m-1; d++){
            vector<int> temp;
            int r = (d<m) ? 0 : d-m+1;
            int c = (d<m) ? d : m-1;
            while(r<n && c>=0){
                temp.push_back(mat[r][c]);
                r++; c--;
            }
            if(d%2 == 0){
                reverse(temp.begin(),temp.end());
            }
            for(int val: temp){
                ans.push_back(val);
            }
        }
        return ans;
    }
};


// class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
//         int n = mat.size(), m = mat[0].size();
//         vector<int> ans;
//         vector<vector<int>> diag (n+m-1);
//         for(int i = 0; i<n ; i++){
//             for(int j = 0; j<m ; j++){
//                 diag[i+j].push_back(mat[i][j]);
//             }
//         }

//         for(int d = 0; d<m+n-1; d++){
//             if(d%2 == 0){
//                 reverse(diag[d].begin(), diag[d].end());
//             }
//             for(int val : diag[d]){
//                 ans.push_back(val);
//             }
//         }
//         return ans;
//     }
// };
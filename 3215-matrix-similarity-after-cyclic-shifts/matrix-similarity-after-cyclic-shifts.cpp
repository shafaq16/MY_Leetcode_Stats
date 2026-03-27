// class Solution {
// public:
//     bool areSimilar(vector<vector<int>>& mat, int k) {
//         int n = mat.size(), m = mat[0].size();
//         k = k % m;

//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(i % 2 == 0){
//                     if(mat[i][j] != mat[i][(j + k) % m])
//                         return false;
//                 }
//                 else{                  
//                     if(mat[i][j] != mat[i][(j - k + m) % m])
//                         return false;
//                 }
//             }
//         }
//         return true;
//     }
// };


class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> original = mat;

        k = k % m; 

        for(int x = 0; x < k; x++){
            for(int i = 0; i < n; i++){
                int first = mat[i][0];
                int last = mat[i][m-1];

                if(i % 2 == 0){
                    for(int j = 0; j < m-1; j++){                 
                        mat[i][j] = mat[i][j+1];
                    }
                    mat[i][m-1] = first;
                }
                else{
                    for(int j = m-1; j > 0; j--){
                        mat[i][j] = mat[i][j-1];
                    }
                    mat[i][0] = last;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] != original[i][j])
                    return false;
            }
        }

        return true;
    }
};
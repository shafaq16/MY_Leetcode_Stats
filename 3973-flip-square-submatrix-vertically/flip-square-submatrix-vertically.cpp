class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int top = x , bottom = x+k-1;
        int n = grid.size(), m = grid[0].size();
        while(top < bottom){
            int left = y; 
            while(left < y+k){
                swap(grid[top][left],grid[bottom][left]);
                left++;
            }  
            top++;
            bottom--;         
        }
        return grid;
    }
};
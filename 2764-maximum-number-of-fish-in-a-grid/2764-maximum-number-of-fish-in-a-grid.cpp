class Solution {
public:
int n, m;
    int solve(int i, int j, vector<vector<int>>& grid){
        if(i < 0 || j < 0 || j >= m || i>= n || grid[i][j] == 0){
            return 0;
        }

        int sum = grid[i][j];
        grid[i][j] = 0;
        sum += solve(i+1, j, grid);
        sum += solve(i, j+1, grid);
        sum += solve(i-1, j, grid);
        sum += solve(i, j-1, grid);
        return sum;

    }
    int findMaxFish(vector<vector<int>>& grid) {
        n = grid.size(); m = grid[0].size();
        int ans = INT_MIN;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                ans = max(ans, solve(i, j, grid));
            }
        }
        return ans;
    }
};
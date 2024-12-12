class Solution {
public:
    int n, m;
    bool check(int i, int j){
        if(i<0 || i == n) return false;
        if(j<0 || j == m) return false;
        return true;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        n = img.size(), m = img[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                int sum = img[i][j], cnt = 1;
                if(check(i-1, j)){
                    cnt++;
                    sum+=img[i-1][j];
                }
                if(check(i+1, j)){
                    cnt++;
                    sum+=img[i+1][j];
                }
                if(check(i, j-1)){
                    cnt++;
                    sum+=img[i][j-1];
                }
                if(check(i, j+1)){
                    cnt++;
                    sum+=img[i][j+1];
                }
                if(check(i-1, j-1)){
                    cnt++;
                    sum+=img[i-1][j-1];
                }
                if(check(i+1, j+1)){
                    cnt++;
                    sum+=img[i+1][j+1];
                }
                if(check(i-1, j+1)){
                    cnt++;
                    sum+=img[i-1][j+1];
                }
                if(check(i+1, j-1)){
                    cnt++;
                    sum+=img[i+1][j-1];
                }
                ans[i][j] = sum/cnt;
            }
        }
        return ans;
    }
};
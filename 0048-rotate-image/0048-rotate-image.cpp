class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();

        for(int i = 0; i<=n/2; i++){
            swap(mat[i], mat[n-1]); n--;
        }
        for(int i = 0; i<mat.size(); i++){
            for(int j = i; j<mat[0].size(); j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
};
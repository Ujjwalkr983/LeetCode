class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size(), m = mat[0].size();
        int left = 0, right = m-1, bot = n-1, top = 0, cnt = 0, total = m*n;
        while(cnt < total){
            for(int i = left; i<=right; i++){
                ans.push_back(mat[top][i]); cnt++;
            }
            top++;

            for(int i = top; i<=bot; i++){
                ans.push_back(mat[i][right]); cnt++;
            }
            right--;

            if(top<=bot){
                for(int i = right; i >= left; i--){
                    ans.push_back(mat[bot][i]); cnt++;
                }
                bot--;
            }

            if(left<=right){
                for(int i = bot; i >= top; i--){
                    ans.push_back(mat[i][left]); cnt++;
                }
                left++;
            }

        }

        return ans;

    }
};
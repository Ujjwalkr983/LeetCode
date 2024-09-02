class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n == 1) return {{1}};
        if(n == 2) return {{1}, {1, 1}};
        vector<vector<int>> ans = {{1}, {1, 1}};
        for(int i = 3; i<=n; i++){
            vector<int> temp = {1};
            vector<int> back = ans.back();
            for(int i = 0; i<back.size()-1; i++){
                temp.push_back(back[i] + back[i+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);

        }
        return ans;
    }
};
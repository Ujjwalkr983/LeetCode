class Solution {
public:
    void dfs(int curr, vector<int> &nums, int n){
        if(curr > n) return;
        nums.push_back(curr);
        for(int i = 0; i<=9; i++){
            dfs(curr*10 + i, nums, n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> nums;
        for(int i = 1; i<=9 ; i++){
            dfs(i, nums, n);
        }
        return nums;
    }
};
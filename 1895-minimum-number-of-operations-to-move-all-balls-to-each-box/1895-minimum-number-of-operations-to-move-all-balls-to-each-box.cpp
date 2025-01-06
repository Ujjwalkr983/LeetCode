class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int n = boxes.size();
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                if(i == j || boxes[j] == '0') continue;
                else{
                    sum += abs(i-j);
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
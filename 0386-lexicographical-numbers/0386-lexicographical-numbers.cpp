class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> ans;
        for(int i = 1; i<= n; i++){
            ans.push_back(to_string(i));
        }
        sort(ans.begin(), ans.end());
        vector<int> fans;
        for(auto it: ans){
            fans.push_back(stoi(it));
        }
        return fans;
    }
};
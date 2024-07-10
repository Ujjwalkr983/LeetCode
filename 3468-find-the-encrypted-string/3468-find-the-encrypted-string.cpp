class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size(); string ans = "";
        for(int i = 0; i<s.size(); i++){
            if(k + i > n-1){
                ans.push_back(s[(k+i) % n]);
            }
            else ans.push_back(s[k]);
        }
        return ans;
    }
};
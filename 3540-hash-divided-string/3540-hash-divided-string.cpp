class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        string ans = "";
        for(int i = 0; i<n; i+=k){
            int num = 0;
            for(int j = 0; j<k; j++){
                num += (s[i+j] - 'a');
            }
            num = num%26;
            ans += (char)(num + 'a');
        }

        return ans;
    }
};
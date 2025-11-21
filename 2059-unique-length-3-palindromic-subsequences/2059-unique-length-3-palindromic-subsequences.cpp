class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        unordered_set<char> st;
        for(auto it: s) st.insert(it);

        int result = 0;
        for(char it: st){
            int lidx = -1;
            int ridx = -1;

            for(int i = 0; i<n; i++){
                if(s[i] == it){
                    if(lidx == -1) lidx = i;
                    ridx = i;
                }
            }

            unordered_set<char> unique;
            for(int j = lidx+1; j<=ridx-1; j++){
                unique.insert(s[j]);
            }
            result += unique.size();
        }
        return result;
    }
};
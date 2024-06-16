class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        if(n == 0 || power<tokens[0]) return 0;
        if(n == 1) return 1;


        int i = 0,  j = n-1;
        int ans = 0;
        while(i<n){
            if(tokens[i] <= power){
                power -= tokens[i];
                ans++; i++;
            }
            else if(tokens[i] > power && ans >= 1 ){
                power += tokens[j];
                if(power >= tokens[i]){
                    ans--;
                }
                j--;
            }
        }
        return ans;
    }
};
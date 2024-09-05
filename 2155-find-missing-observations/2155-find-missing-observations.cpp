class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size(), size = m+n;
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int remain = (mean*size) - sum;

        if(remain/n < 1 || remain/n >6) return {};

        vector<int> ans(n, remain / n);
        remain -= ((remain/n)*n);
        int i = 0;
        while(remain > 0 ){
            if(ans[i] == 6) return {};
            ans[i]++;
            remain--;
            i++;
            i = i%n;
        }
        return ans;
    }
};
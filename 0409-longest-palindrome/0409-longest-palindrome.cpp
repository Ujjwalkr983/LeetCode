class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0; bool ch = false;
        unordered_map<char, int> mp;
        for(auto it: s) mp[it]++;
        for(auto it: mp){
            if(it.second % 2 == 0) ans += it.second;
            if(it.second % 2 == 1){
                ans += (it.second-1); ch = true;
            }
        }
        if(ch) ans++;
        return ans;
    }
};
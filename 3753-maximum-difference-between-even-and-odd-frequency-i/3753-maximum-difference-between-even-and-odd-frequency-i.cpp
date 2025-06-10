class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(auto it:s) mp[it]++;
        int odd = INT_MIN, even = INT_MAX;
        for(auto it: mp){
            int cnt = it.second;
            if(cnt % 2 == 0) even = min(even, cnt);
            if(cnt % 2 == 1) odd = max(odd, cnt);
        }
        if(odd == INT_MIN || even == INT_MAX) return 0;
        return odd - even;
    }
};
class Solution {
public:
    int partitionString(string s) {
        int n = s.size(); int ans = 0;
        int i = 0;
        while(i<n){
            map<char, int> mp;
            while(i<n){
                if(mp.find(s[i]) == mp.end()){
                    mp[s[i]]++;
                    i++;
                }
                else break;
            }
            ans++;
        }

        return ans;
    }
};